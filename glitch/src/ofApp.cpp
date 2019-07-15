#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true); // 描画を安定させる
    ofSetFrameRate(60); // フレームレートを決定
    ofSetCircleResolution(3); // 円を三角形にする
    
    myFbo.allocate(512, 512); // fboの描画領域を指定
    myGlitch.setup(&myFbo); // fboとglitchを結びつける
}

//--------------------------------------------------------------
void ofApp::update(){
    
    myFbo.begin(); // fbo描画を開始
    ofClear(0, 0, 0,255); // 描画をリセットする
    camera.begin(); // カメラを開始
        
    for (int i = 0; i < 100; i++){
        // それぞれに色付け
        if        (i % 5 == 0)ofSetColor(50 , 255, 100);
        else if (i % 9 == 0)ofSetColor(255, 50, 100);
        else                ofSetColor(255, 255, 255);
            
        ofPushMatrix(); // 情報を一時保存
        ofRotate(ofGetFrameNum(), 1.0, 1.0, 1.0); // フレーム数で回転
        ofTranslate((ofNoise(i/2.4)-0.5)*1000, (ofNoise(i/5.6)-0.5)*1000, (ofNoise(i/8.2)-0.5)*1000); // 位置を移動する
        ofCircle(0, 0, (ofNoise(i/3.4)-0.5)*100+ofRandom(3)); // 円(三角形)を設置
        ofPopMatrix(); // 一時保存した状態に戻す
    }
        
    camera.end(); // カメラを終了
    myFbo.end(); // 描画を終了
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // グリッチエフェクトなし描画
    ofSetColor(255);
    myFbo.draw(0, 0);
    
    // グリッチエフェクト追加
    myGlitch.generateFx();
    
    // グリッチエフェクトあり描画
    ofSetColor(255);
    myFbo.draw(512, 0);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == '1') myGlitch.setFx(OFXPOSTGLITCH_CONVERGENCE    , true); // rgbに揺れる
    if (key == '2') myGlitch.setFx(OFXPOSTGLITCH_GLOW            , true); // 白っぽい光が強くなる
    if (key == '3') myGlitch.setFx(OFXPOSTGLITCH_SHAKER            , true); // ボケながら揺れる
    if (key == '4') myGlitch.setFx(OFXPOSTGLITCH_CUTSLIDER        , true); // クリアに揺れる
    if (key == '5') myGlitch.setFx(OFXPOSTGLITCH_TWIST            , true); // 大きく動く
    if (key == '6') myGlitch.setFx(OFXPOSTGLITCH_OUTLINE        , true); // 枠線のみになる
    if (key == '7') myGlitch.setFx(OFXPOSTGLITCH_NOISE            , true); // ノイズがかかる
    if (key == '8') myGlitch.setFx(OFXPOSTGLITCH_SLITSCAN        , true); // 様々な形に変形する
    if (key == '9') myGlitch.setFx(OFXPOSTGLITCH_SWELL            , true); // 画面全体が波のように揺れる
    if (key == '0') myGlitch.setFx(OFXPOSTGLITCH_INVERT            , true); // 色が反転する
    
    if (key == 'q') myGlitch.setFx(OFXPOSTGLITCH_CR_HIGHCONTRAST, true); // コントラスト上げる
    if (key == 'w') myGlitch.setFx(OFXPOSTGLITCH_CR_BLUERAISE    , true); // 青みがかる
    if (key == 'e') myGlitch.setFx(OFXPOSTGLITCH_CR_REDRAISE    , true); // 赤みがかる
    if (key == 'r') myGlitch.setFx(OFXPOSTGLITCH_CR_GREENRAISE    , true); // 緑がかる
    if (key == 't') myGlitch.setFx(OFXPOSTGLITCH_CR_BLUEINVERT    , true); // 青反転
    if (key == 'y') myGlitch.setFx(OFXPOSTGLITCH_CR_REDINVERT    , true); // 赤反転
    if (key == 'u') myGlitch.setFx(OFXPOSTGLITCH_CR_GREENINVERT    , true); // 緑反転
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == '1') myGlitch.setFx(OFXPOSTGLITCH_CONVERGENCE    , false);
    if (key == '2') myGlitch.setFx(OFXPOSTGLITCH_GLOW            , false);
    if (key == '3') myGlitch.setFx(OFXPOSTGLITCH_SHAKER            , false);
    if (key == '4') myGlitch.setFx(OFXPOSTGLITCH_CUTSLIDER        , false);
    if (key == '5') myGlitch.setFx(OFXPOSTGLITCH_TWIST            , false);
    if (key == '6') myGlitch.setFx(OFXPOSTGLITCH_OUTLINE        , false);
    if (key == '7') myGlitch.setFx(OFXPOSTGLITCH_NOISE            , false);
    if (key == '8') myGlitch.setFx(OFXPOSTGLITCH_SLITSCAN        , false);
    if (key == '9') myGlitch.setFx(OFXPOSTGLITCH_SWELL            , false);
    if (key == '0') myGlitch.setFx(OFXPOSTGLITCH_INVERT            , false);
    
    if (key == 'q') myGlitch.setFx(OFXPOSTGLITCH_CR_HIGHCONTRAST, false);
    if (key == 'w') myGlitch.setFx(OFXPOSTGLITCH_CR_BLUERAISE    , false);
    if (key == 'e') myGlitch.setFx(OFXPOSTGLITCH_CR_REDRAISE    , false);
    if (key == 'r') myGlitch.setFx(OFXPOSTGLITCH_CR_GREENRAISE    , false);
    if (key == 't') myGlitch.setFx(OFXPOSTGLITCH_CR_BLUEINVERT    , false);
    if (key == 'y') myGlitch.setFx(OFXPOSTGLITCH_CR_REDINVERT    , false);
    if (key == 'u') myGlitch.setFx(OFXPOSTGLITCH_CR_GREENINVERT    , false);
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
