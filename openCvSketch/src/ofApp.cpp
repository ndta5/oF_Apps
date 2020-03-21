#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //  load image
    rgb.load("A310.jpg");
    grayImage.allocate(1024,683);
    edgeImage.allocate(1024,683);
    colorImage = rgb;
    grayImage = colorImage;
    grayImage.blur();
    cvCanny(grayImage.getCvImage(), edgeImage.getCvImage(), 20, 100);
    unsigned char *edgeData = edgeImage.getPixels().getData();
    
    
    for (int i=0; i < 1024*683; i+=5) {
        if (edgeData[i] == 0) {
            continue;
        }
        else {
            int coordY = floor(i/1024);
            mesh.addVertex(ofVec3f(i-1024*coordY, coordY));
            delaunay.addPoint(ofVec2f(i-1024*coordY, coordY));
        }
    }
    
    delaunay.addPoint(ofPoint(0, 0));
    delaunay.addPoint(ofPoint(0, 683));
    delaunay.addPoint(ofPoint(1024, 683));
    delaunay.addPoint(ofPoint(1024, 0));
    
    delaunay.triangulate();

    for (int i=0; i < 1024*683; i+=5) {
        if (edgeData[i] == 0) {
            continue;
        }
        else {
            ofColor color(ofRandom(255),ofRandom(255),ofRandom(255));
            delaunay.triangleMesh.addColor(color);
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    glShadeModel(GL_FLAT);
    delaunay.draw();
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
