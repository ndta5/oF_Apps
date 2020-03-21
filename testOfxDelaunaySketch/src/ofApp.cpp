#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    rgb.load("A310.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){
        delaunay.reset();
    //    mesh.clear();

        convertColor(rgb, gray, CV_RGB2GRAY);
        blur(gray, 4);
        Canny(gray, edge, 20, 100);
        gray.update();
        edge.update();
        dilate(edge);
        unsigned char *edgeData = edge.getPixels();
        
        
        int up = 45;
        for (int i=0; i < w*h; i+=up) {
            if (edgeData[i] == 0) {
                continue;
            }
            else {
                int coordY = floor(i/w);
                mesh.addVertex(ofVec2f(i-w*coordY, coordY));
                delaunay.addPoint(ofVec2f(i-w*coordY, coordY));
            }
        }
        
        delaunay.addPoint(ofPoint(0, 0));
        delaunay.addPoint(ofPoint(0, h));
        delaunay.addPoint(ofPoint(w, h));
        delaunay.addPoint(ofPoint(w, 0));
        
        delaunay.triangulate();
}

//--------------------------------------------------------------
void ofApp::draw(){
    camera.begin();
    ofTranslate(-ofGetWidth()/2, -ofGetHeight()/2, 0);//center mesh
    //delaunay.triangleMesh.drawWireframe();
    delaunay.triangleMesh.draw();
    camera.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
