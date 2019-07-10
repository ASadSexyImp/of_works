#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    // 背景をぬりつぶす
    ofBackground(0);
    
    // 真ん中の値を保存
    positionX = ofGetWidth() / 2;
    positionY = ofGetHeight() / 2;
    
    // 前のフレームを使えるようにする
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // ランダムな数を選ぶ
    int randomNumber = floor(ofRandom(4));
    
    // 0なら、右に進む
    if (randomNumber == 0) {
        positionX += 15;
    }
    // 1なら、左に進む
    else if (randomNumber == 1) {
        positionX -= 15;
    }
    // 2なら、下に進む
    else if (randomNumber == 2) {
        positionY += 15;
    }
    // 3なら、上に進む
    else if (randomNumber == 3) {
        positionY -= 15;
    }
    
    // 座標がキャンバスの外に出たら
    if( positionX < 0 || positionX > ofGetWidth() || positionY < 0 || positionY > ofGetHeight() ){
        // 真ん中に戻す
        positionX = ofGetWidth() / 2;
        positionY = ofGetHeight() / 2;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // ぬりつぶす
    ofSetColor(ofRandom(255), ofRandom(255), 255);
    
    // 円を描く
    ofDrawCircle(positionX, positionY, 5);

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
