#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // 四角形の基準を真ん中にする
    ofSetRectMode(OF_RECTMODE_CENTER);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // 角度を増やす
    angle += 0.01;

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // 座標の基点を真ん中に移動させる
    ofTranslate(ofGetWidth() / 4, ofGetHeight() / 4);
    
    // 背景をぬりつぶす
    ofBackground(0, 0, 100);
    
    // 時間差を入れる変数
    int difference = 0;

    // 繰り返す
    for (int i = 10; i < 500; i += 10) {
        // ぬりつぶす
        ofSetColor(i / 2, 0, 255);
        
        // 時間差をつける
        difference += 1;
        
        // 四角形を描く
        ofDrawRectangle(i, 250, 2, sin(angle + difference) * 500);
        ofDrawRectangle(250, i, sin(angle + difference) * 500, 2);
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
