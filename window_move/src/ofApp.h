#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofTrueTypeFont     vagRounded; // フォントの変数
    
    float     ballPositionX[3]; // ボールのx座標
    float     ballPositionY[3]; // ボールのy座標
    float     ballVelocityX[3]; // ボールのx方向スピード
    float     ballVelocityY[3]; // ボールのy方向スピード
    
};
