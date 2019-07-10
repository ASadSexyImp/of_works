#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    

    // 輪郭線（りんかくせん）をとる
    noStroke();

}

//--------------------------------------------------------------
void ofApp::update(){
    
    // 角度を変化させる
    angle += 0.05;
    
    // sin関数を使って縦の位置を計算する
    positionY = sin(angle) * 150;
    
    // cos関数を使って横の位置を計算する
    positionX = cos(angle) * 150;

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // 色をぬる
    ofSetColor(0, 255, 255);
    
    // 背景を黒くして、残像をつける
    ofBackground(0, 15);
    
    // 円を描く
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
