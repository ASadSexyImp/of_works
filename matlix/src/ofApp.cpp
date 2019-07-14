#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0,0,0); // 背景を表示する
    
//    vidGrabber.setVerbose(true);
    // 画面の描画領域を全体にする
    vidGrabber.setup(ofGetWindowWidth(), ofGetWindowHeight());
    
    // フォントの読み込み
    font.load("Courier New Bold.ttf", 9);
    
    // 表示する文字を入れる
    asciiCharacters =  string("  ..,,,'''``--_:;^^**""=+<>iv%&xclrs)/){}I?!][1taeo7zjLunT#@JCwfy325Fp6mqSghVd4EgXPGZbYkOA8U$KHDBWNMR0Q");
    //--------------------------------------------------------------
    // チャレンジ 表示する文字を変えてみよう
    
    // 透明度をつける設定をする
    ofEnableAlphaBlending();
}


//--------------------------------------------------------------
void ofApp::update(){
    // 読み込んでるwebcamを最新状態にする
    vidGrabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // webcamの情報をピクセルで読みこむ
    ofPixelsRef pixelsRef = vidGrabber.getPixels();
    
    for (int i = 0; i < ofGetWindowWidth(); i+= 7){
        for (int j = 0; j < ofGetWindowHeight(); j+= 9){
            // ピクセルの明るさを取得する
            float lightness = pixelsRef.getColor(i,j).getLightness();
            
            // 明るさに対して計算し、表示する文字を決定する
            int character = powf( ofMap(lightness, 0, 255, 0, 1), 2.5) * asciiCharacters.size();
            
            // 緑っぽい色にする
            ofSetColor(0, 250, 10, ofRandom(255));
            
            // フォントをストリング変換して表示
            font.drawString(ofToString(asciiCharacters[character]), i, j);
        }
    }
    
}


//--------------------------------------------------------------
void ofApp::keyPressed  (int key){
    
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
