#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // 背景を黒くする
    ofBackground(0);
    
    // 色をぬる
    ofSetColor(255, 255, 0);
    
    // 前のフレームを使えるようにする
    ofSetBackgroundAuto(false);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // 角度を変化させる
    angle += 0.025;
    
    // 半径を変化させる
    radius += 0.3;
    
    // sin関数を使って縦の位置を計算する
    positionY = sin(angle) * radius;
    
    // cos関数を使って縦の位置を計算する
    positionX = cos(angle) * radius;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // 渦（うず）を描く
    ofDrawCircle(ofGetWidth() / 2 + positionX, ofGetHeight() / 2 + positionY, 20);

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
