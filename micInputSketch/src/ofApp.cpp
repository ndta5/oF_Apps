#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    bufferSize = 0;
    ofSoundStreamSettings settings;
    
    settings.setInListener(this);
    settings.sampleRate = 44100;
    settings.numOutputChannels=0;
    settings.numInputChannels=1;
    settings.bufferSize = 512;
    sound_stream.setup(settings);
}

void ofApp::audioReceived (float *buf, int bufSize, int nChan) {
    bufferSize = bufSize;
    for (int i = 0; i < bufferSize; i++)
        buffer[i] = buf[i];
}

//--------------------------------------------------------------
void ofApp::update(){

}

void ofApp::draw () {
    for (int i = 0; i < bufferSize; i++) {
        int dy = buffer[i] * 100;
        ofSetColor(255, 127, 127);
        ofDrawLine(i, 200, i, 200 - dy);
    }
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
