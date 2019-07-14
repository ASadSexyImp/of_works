#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // スクリーンの大きさを測る
    int screenW = ofGetScreenWidth();
    int screenH = ofGetScreenHeight();
    // windowの位置を決める
    ofSetWindowPosition(screenW/2-300/2, screenH/2-300/2);
    
    // フォントの読み込み
    vagRounded.load("vag.ttf", 16);
    
    // 背景を描画
    ofBackground(50,50,50);
    
    // ボールの位置と速さを決める
    for (int i = 0; i < 3; i++){
        ballPositionX[i] = 150;
        ballPositionY[i] = 150;
        ballVelocityX[i] = ofRandom(-5,5);
        ballVelocityY[i] = ofRandom(-5,5);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i = 0; i < 3; i++){
        // ボールの座標にスピードを足していく
        ballPositionX[i] += ballVelocityX[i];
        ballPositionY[i] += ballVelocityY[i];
        
        // 現在のウィンドウポジションを測定
        int posx = ofGetWindowPositionX();
        int posy = ofGetWindowPositionY();
        
        // ボールが左端に来た時
        if (ballPositionX[i] < 0){
            // 進む方向を逆にする
            ballVelocityX[i] *= -1;
            // ウィンドウを左にずらす
            ofSetWindowPosition(posx-10, posy);
        }
        // ボールが右端に来た時
        else if (ballPositionX[i] > ofGetWidth()){
            // 進む方向を逆にする
            ballVelocityX[i] *= -1;
            // ウィンドウを右にずらす
            ofSetWindowPosition(posx+10, posy);
        }
        
        if (ballPositionY[i] < 0){
            // 進む方向を逆にする
            ballVelocityY[i] *= -1;
            // ウィンドウを上にずらす
            ofSetWindowPosition(posx, posy-10);
        } else if (ballPositionY[i] > ofGetHeight()){
            // 進む方向を逆にする
            ballVelocityY[i] *= -1;
            // ウィンドウを下にずらす
            ofSetWindowPosition(posx, posy+10);
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 文字の色
    ofSetColor(255);
    // 文字の表示
    vagRounded.drawString("window pos ("+ofToString(ofGetWindowPositionX())+", "+ofToString( ofGetWindowPositionY())+")", 10, 25);
    
    // それぞれのボールの表示
    ofSetColor(250, 10, 10);
    ofDrawCircle(ballPositionX[0], ballPositionY[0], 15);
    ofSetColor(10, 250, 10);
    ofDrawCircle(ballPositionX[1], ballPositionY[1], 15);
    ofSetColor(10, 10, 250);
    ofDrawCircle(ballPositionX[2], ballPositionY[2], 15);
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
