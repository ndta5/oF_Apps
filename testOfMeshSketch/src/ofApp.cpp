#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mesh.addVertex(ofVec3f(100,100,0));
    mesh.addVertex(ofVec3f(100,200,0));
    mesh.addVertex(ofVec3f(200,200,0));
    mesh.addVertex(ofVec3f(100,100,0));
    mesh.addVertex(ofVec3f(200,100,0));
    mesh.addVertex(ofVec3f(200,200,0));

    mesh.addColor(ofColor(255,0,0));
    mesh.addColor(ofColor(255,0,0));
    mesh.addColor(ofColor(255,0,0));
    mesh.addColor(ofColor(0,0,255));
    mesh.addColor(ofColor(0,0,255));
    mesh.addColor(ofColor(0,0,255));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    mesh.draw();
    ofTranslate(200, 0);
    mesh.drawWireframe(); //線のみ表示
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
