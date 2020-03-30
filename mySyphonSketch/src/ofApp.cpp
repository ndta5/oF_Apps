#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    output.setName("Main");
    r=10;
    add=10;
}

//--------------------------------------------------------------
void ofApp::update(){
    if(r==200)add=-10;
    if(r==10)add=10;
    r=r+add;
}

//--------------------------------------------------------------
void ofApp::draw(){
    //丸が大きくなったり、小さくなったりするだけのアニメーション

    ofSetColor(200, 0, 0);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, r);
    output.publishScreen();
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
