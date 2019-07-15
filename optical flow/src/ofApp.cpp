#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // CV初期設定
    camera.initGrabber(320, 240);
    // franeback方を使う
    curFlow = &farneback;
}

//--------------------------------------------------------------
void ofApp::update() {
    // カメラの更新
    camera.update();
    
    // 画面が動いた時に
    if(camera.isFrameNew()) {
        // オプティカルフローを計算
        curFlow->calcOpticalFlow(camera);
    }
}

//--------------------------------------------------------------
void ofApp::draw() {
    // 背景を描画
    ofBackground(0);
    
    // 線に白色をつける
    ofSetColor(255);

    // オプティカルフローを描画
    curFlow->draw(0,0,ofGetWidth(),ofGetHeight());
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
