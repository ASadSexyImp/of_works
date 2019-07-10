//
//  bubble.cpp
//  green_particle
//
//  Created by Masakazu Nishimura on 2019/06/26.
//
//#pragma once

//#include "ofMain.h"
//#include "bubble.hpp"
#include <vector>
#include "ofApp.h"
// 泡のクラス
class Bubble {
    // 泡１つの初期化
public:
    // 泡の座標を初期化
    vector<float> position;
    // 泡の縦の移動速度をランダムで初期化
    float velocityY;
    // 泡の大きさをランダムで初期化
    float size;
    // 泡の揺れの計算の角度をランダムで初期化
    float angle;
    // 泡の角度の変化スピードをランダムで初期化
    float angleSpeed;
    // 泡の揺れの大きさをランダムで初期化
    float swingWidth;
    // 色をランダムで初期化
    float color;
    // 透明度をランダムで初期化
    float alpha;
    

    Bubble();
    void move();
    void draw();
};

// デフォルトコンストラクタ
Bubble::Bubble()
{
    position = {ofRandom(ofGetWidth()), ofRandom(ofGetHeight())};
    velocityY = ofRandom(0.3, 1.5);
    size = ofRandom(2, 20);
    angle = ofRandom(0, 3);
    angleSpeed = ofRandom(0.02, 0.04);
    swingWidth = ofRandom(10, 25);
    color = ofRandom(100, 255);
    alpha = ofRandom(50, 255);
}

// 泡１つを移動させる
void Bubble::move() {
    // 縦に移動
    position[1] -= velocityY;
    // 画面の上に消えたら下から出てくる
    if (position[1] < -size / 2) {
        position[1] = ofGetHeight() + size / 2;
    }
    
    // 泡の揺れ用の計算
    angle += angleSpeed;
}

// 泡１つを表示する
void Bubble::draw() {
    // 色を塗る
    ofSetColor(color, 255, 0, alpha);
    
    // sin関数で泡の揺れを表現する
    float x = position[0] + sin(angle) * swingWidth;
    ofDrawCircle(x, position[1], size, size);
}
