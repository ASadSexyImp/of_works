#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // ランダムで値を入れていく
    for(int i = 0; i < count; i++) {
        positionX[i] = ofRandom(100,300);
        positionY[i] = ofRandom(50,600);
        velocityX[i] = ofRandom(0.5,3);
        scalar[i] = ofRandom(10,80);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // 背景を更新
    ofBackground(255);
    
    for(int i = 0; i < count; i++) {
        // 位置にスピードを足して更新する
        positionX[i] += velocityX[i];
        
        //mouseYの位置によって、色を変える
        if(mouseY > positionY[i]) {
            ofSetColor(positionY[i] / 2, 170, 255);
        }
        if(mouseY < positionY[i]) {
            ofSetColor(255, positionY[i]/2, 170);
        }
        
        //mouseXの位置によって、形を変える
        if(mouseX > positionX[i]) {
            // 円形にする
            ofDrawCircle(positionX[i], positionY[i], scalar[i]);
        }
        if(mouseX < positionX[i]) {
            // 四角形にする
            ofDrawRectangle(positionX[i], positionY[i], scalar[i], scalar[i]);
        }
        
        //跳ね返り
        if(positionX[i] > ofGetWidth() - scalar[i] / 2) {
            velocityX[i] *= -1;
        }
        if(positionX[i] < scalar[i] / 2) {
            velocityX[i] *= -1;
        }
    }
    

    //境界線
    ofSetColor(34,48,89);
    ofDrawLine(mouseX, 0, mouseX, ofGetHeight());
    ofDrawLine(0, mouseY, ofGetWidth(), mouseY);
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
