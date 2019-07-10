#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // 背景をぬりつぶす
    ofBackground(255);
    
    // 前のフレームを使えるようにする
    ofSetBackgroundAuto(false);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // 角度を増やす
    angle += 1;
    
    // 円の直径を大きくする
    diameter += 1;
    
    // 渦を大きくする
    step += 2;

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // 描画の基準を真ん中に移動する
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    
    // ぬりつぶす
    ofSetColor(255, ofRandom(255), ofRandom(255));
    
    // 円を描く
    ofDrawCircle(cos(angle) * step, sin(angle) * step, diameter);

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
