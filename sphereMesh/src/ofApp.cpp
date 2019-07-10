#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60); // １秒間に描画するフレーム数を60にする
    ofBackground(0, 0, 0); // 背景を黒にする
    
    ofEnableDepthTest(); // 深さを描画できるようにする
    
    light.enable(); // ライトを使えるようにする
    light.setPosition(-100, 100, 500); // ライトの場所を指定する
    glPointSize(1); // 点の大きさを指定
    
    // 球からメッシュを作成      (半径、解像度)
    myMesh = ofSpherePrimitive(200, 70).getMesh();
    
    // メッシュの色設定
    for (int i = 0; i < myMesh.getVertices().size(); i++) {
        myMesh.addColor(ofFloatColor(0.5, 1.0, 1.0, 0.5)); // floatの値で色を作る
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < myMesh.getVertices().size(); i++) { // 頂点の数だけ見ていく
        ofVec3f point = myMesh.getVertices()[i] / 300.0; // 頂点の位置を取得する
        float size = 80 + 100 * ofNoise(point.x, point.y, point.z, ofGetElapsedTimef()); // 経過時間を取得してノイズを作成
        ofVec3f newPoint = point.normalize() * size; // 新しい座標を作成
        myMesh.setVertex(i, newPoint); // ノイズを加えた位置に頂点を移動させる
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin(); // カメラをスタート
    
    myMesh.setMode(OF_PRIMITIVE_TRIANGLE_STRIP); // メッシュの描画モードを設定
    // OF_PRIMITIVE_TRIANGLE_FAN, OF_PRIMITIVE_LINES, OF_PRIMITIVE_LINE_STRIP, OF_PRIMITIVE_LINE_LOOPなど試してみよう
    
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
