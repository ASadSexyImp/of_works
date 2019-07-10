#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    // 前のフレームを使えるようにする
    ofSetBackgroundAuto(false);
    
    // 色をぬる
    ofSetColor(255, 0, 255);
    
    // 透明度を使えるようにする
    ofEnableAlphaBlending();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // 角度を変化させる
    angle += 0.05;
    
    // sin関数を使って縦の位置を計算する
    positionY = sin(angle) * 150;
    
    // 右に移動し続ける
    positionX += 3;
    
    // 右端までいったら、左端に戻る
    if (positionX > ofGetWidth()) {
        positionX = 0;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // 背景を黒くして、残像をつける
    ofBackground(0, 20);
    
    // 波を描く
    ofDrawCircle(positionX, ofGetHeight() / 2 + positionY, 20);

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
