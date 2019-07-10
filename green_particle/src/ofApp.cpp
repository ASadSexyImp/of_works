//#include "ofApp.h"
#include "bubble.cpp"
Bubble bubbles[100]; // 泡の配列
    
//--------------------------------------------------------------
void ofApp::setup(){
    // 前のフレームを使えるようにする
    ofSetBackgroundAuto(false);
    
    // 泡のクラスを作る
    
    for (int i = 0; i <  bubbleCount; i++) {
        bubbles[i] = Bubble();
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // 背景をぬる
    ofBackground(0, 20, 0);
    
    // 泡の数だけクラスを処理する
    for (int i = 0; i <  bubbleCount; i++) {
        // 泡１つを移動させる
        bubbles[i].move();
        // 泡１つを表示する
        bubbles[i].draw();
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

