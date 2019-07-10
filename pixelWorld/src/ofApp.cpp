#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    photoImage.load("photo5.jpg");
    
    //背景をぬりつぶす
    ofBackground(255);
    
    // 線の太さ
    ofSetLineWidth(5);
    
    //ぬりをなくす
    ofNoFill();
    
    //画像の基準を真ん中にする
//    imageMode(CENTER);
    
    // 画像の色の情報をピクセルの配列に写す
    photoImage.loadPixels();
    
    unsigned char *pixels = photoImage.getPixels();
}

//--------------------------------------------------------------
void ofApp::update(){
    //横の位置をランダムにする
    positionX = ofRandom(photoImage.getWidth());
    //縦の位置をランダムにする
    positionY = ofRandom(photoImage.getHeight());
    //画像の色の情報を取得する
    pixels = photoImage.get(positionX, positionY);
    // 図形の大きさをランダムにする
    scalar = ofRandom(5,30);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 線の色をぬる
    ofSetColor(pixels,50);
    
    //四角形を描く
    ofDrawRectangle(positionX, positionY, scalar, scalar);
    
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
