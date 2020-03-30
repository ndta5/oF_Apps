#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 画面の設定
    ofBackground(0);
    ofEnableDepthTest();
    cam.setDistance(100);
    // メッシュの幅と高さの初期化
    w = 100;
    h = 100;
    // メッシュの各頂点の色を初期化
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            mesh.addColor(ofFloatColor(0.5, 0.8, 1.0));
        }
    }
}

//--------------------------------------------------------------
void ofApp::resetParticles(){

}

//--------------------------------------------------------------
void ofApp::update(){
    // まず、現在の全ての頂点情報を消去(vertices->頂点)
    mesh.clearVertices();
    // メッシュの全ての頂点位置を更新、それを頂点情報として追加
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            float x = sin(i * 0.1 + ofGetElapsedTimef()) * 10.0;
            float y = sin(j * 0.15 + ofGetElapsedTimef()) * 10.0;
            float z = x + y;
            mesh.addVertex(ofVec3f(i - w/2, j - h/2, z));

        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    // メッシュの描画
     ofSetHexColor(0xffffff);
     // カメラの開始
     cam.begin();
     // 頂点の位置をドットで表示
     glPointSize(2.0);
     mesh.drawVertices();
    // カメラ停止
     cam.end();
     // ログの表示
     string info;
     info = "vertex num = " + ofToString(w * h, 0) + "\n";
     info += "FPS = " + ofToString(ofGetFrameRate(), 2) + "\n";
     ofDrawBitmapString(info, 30, 30);
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
