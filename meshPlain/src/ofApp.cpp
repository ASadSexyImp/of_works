#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60); // １秒間に描画するフレーム数を60にする
    ofBackground(0, 0, 0); // 背景を黒にする
    
    ofEnableDepthTest(); // 深さを描画できるようにする
    
    light.enable(); // ライトを使えるようにする
    light.setPosition(-100, 100, 500); // ライトの場所を指定する
    glPointSize(3); // 点の大きさを指定
    
    // 面からメッシュを作成      (幅, 高さ, 幅解像度, 高さ解像度)
    myMesh = ofPlanePrimitive(1000, 1000, 100, 100).getMesh();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < myMesh.getVertices().size(); i++) { // 頂点の数だけ見ていく
        ofVec3f point = myMesh.getVertices()[i] / 400.0; // 頂点の位置を取得する
        float z = ofNoise(point.x, point.y, ofGetElapsedTimef()) * 200.0; // 経過時間を取得してノイズを作成
        myMesh.setVertex(i, ofVec3f(myMesh.getVertices()[i].x, myMesh.getVertices()[i].y, z)); // ノイズを加えた位置に頂点を移動させる
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin(); // カメラをスタート
    
    myMesh.setMode(OF_PRIMITIVE_TRIANGLE_STRIP); // メッシュの描画モードを設定
    myMesh.draw(); // メッシュを描画
    
    cam.end(); // カメラを終了する

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
