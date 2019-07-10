#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // フレーム数をセットする
    ofSetFrameRate(15);
    
    // 背景を黒にする
    ofBackground(0);
    
    // ぬりをなくす
    ofNoFill();
    
    // 四角形の基準を真ん中にする
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    // 前のフレームを使えるようにする
    ofSetBackgroundAuto(false);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // 角度を増やす
    angle += 1;
    
    // 乱数をつくる
    length = ofRandom(500);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // 座標の基点を真ん中に移動させる
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    
    // キャンバスを回転させる
    ofRotateZDeg(angle);
    
    // 線の色をぬる
    ofSetColor(0, ofRandom(255), 255, 200);
    
    // 四角を描画する
    ofDrawRectangle(0, 0, length, length);
    
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
