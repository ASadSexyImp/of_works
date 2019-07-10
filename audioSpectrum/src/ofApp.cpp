#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofToggleFullscreen(); // 全画面表示
    ofSetVerticalSync(true); // 画面の垂直同期をonにする
    ofEnableBlendMode(OF_BLENDMODE_ADD); // 色を重ねるほど明るくなる
    ofBackground(0, 0, 0); // 背景
    
    mySound.load("sound.mp3"); // 音楽ファイルの読み込み　！自分で入れた音楽ファイルの名前を読み込もう
    mySound.setLoop(true); // 音楽をループさせる　falseにすると？
    mySound.play(); // 音楽の再生
    
    // FFT解析の初期化
    fftSmoothed = new float[8192]; // fftの解析結果を8192個の配列に入れる
    for (int i = 0; i < 8192; i++){
        fftSmoothed[i] = 0; // 初期化
    }
    nBandsToGet = 360; // 精度を設定 今回は円を一周するので360度回れるようにする
    
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSoundUpdate(); // soundPlayerの更新
    volume = ofSoundGetSpectrum(nBandsToGet); //音量を取得
    
    // FFT解析をして、音量の平均を出す
    for (int i = 0; i < nBandsToGet; i++) {
        fftSmoothed[i] *= 0.96f;
        if (fftSmoothed[i] < volume[i]){
            fftSmoothed[i] = volume[i];
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    int start_x = 200; // 一番左端の四角形の座標
    int base_y = 500; // 四角形のy座標
    float width = (float)(800) / nBandsToGet; // 四角形の幅
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2); // 真ん中を基準とする
    
    
    for(int i = 0; i < nBandsToGet; i+=5){
        ofPushMatrix(); // 現在の状態を保存する
        ofSetColor(ofColor(ofColor::fromHsb(float(255)/nBandsToGet * i, 100, 255))); // 位置によって色を変える
        float length = 300 * fftSmoothed[i%nBandsToGet]; // 四角形の幅
        ofRotateZ(i); // 5度ずつz軸に対して回転する
        ofDrawRectangle(0, 150, 5, length); // 四角形を表示
        ofPopMatrix(); // 元の設定に戻す
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
