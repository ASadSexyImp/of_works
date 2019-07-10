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
    
    // 変数
    ofImage photoImage; //画像を入れる変数
    int positionX;  //横の位置を入れる変数
    int positionY;  //縦の位置を入れる変数
    ofColor pixels;     //ピクセルのデータを入れる変数
    int scalar;     //図形の大きさを入れる関数
		
};
