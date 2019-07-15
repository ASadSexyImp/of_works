#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cam.initGrabber(ofGetWidth(), ofGetHeight()); // カメラを作る
    contour.setMinAreaRadius(30); // 輪郭の最小範囲
    contour.setMaxAreaRadius(200); // 輪郭の最大範囲
}

//--------------------------------------------------------------
void ofApp::update(){
    cam.update(); // カメラの更新
    
    // 新しいところを検出できたら
    if(cam.isFrameNew()) {
        contour.setThreshold(ofMap(mouseX, 0, ofGetWidth(), 0, 255));
        // カメラの中の輪郭を保存する
        contour.findContours(cam);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 白色にする
    ofSetColor(255);
    // カメラの描画
    cam.draw(0, 0);
    // 輪郭の描画
    contour.draw();
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
