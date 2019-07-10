#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 前のフレームを使えるようにする
    ofSetBackgroundAuto(false);
    // 線の太さ
    ofSetLineWidth(6);
}

//--------------------------------------------------------------
void ofApp::update(){
    // 角度を変化させる
    angle += 0.1;
    // チャレンジ 角度を変えてみよう　0.3
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 背景を作ろう
    ofBackground(0, 20);
    
    // 線の色をぬる
    ofSetColor(0, 255, 0);
    
    // 位置を移動させる
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    
    // 線を描く
    ofDrawLine(cos(angle) * 150, sin(angle * 0.8)  * 100, -cos(angle * 1.2) * 200, sin(angle * 0.9) * 200);

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
