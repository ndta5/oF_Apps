#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    int w = 100;
    int h = 100;

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            mesh.addColor(ofFloatColor(0.5, 0.8, 1.0));
        }
    }

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            float x = sin(i * 0.1) * 100.0;
            float y = sin(j * 0.15) * 100.0;
            float z = x + y;
            mesh.addVertex(ofVec3f(i - w/2, j - h/2, z));
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(300, 200);

    ofEnableBlendMode(OF_BLENDMODE_ADD);

    ofSetColor(0, 50, 50);
    ofDrawCircle(0, -50, 100);
    ofDrawCircle(0,  50, 100);

    // メッシュの描画
       // カメラの開始
       cam.begin();
       // 頂点の位置をドットで表示
       glPointSize(2.0);
       mesh.drawVertices();
      // カメラ停止
       cam.end();
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
