#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    photoImage.load("photo5.jpg");
    ofSetFrameRate(1);
    //Getting pointer to pixel array of image
    
}

//--------------------------------------------------------------
void ofApp::update(){

    photoImage.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    photoImage.draw(0, 0);
    unsigned char* pixels = photoImage.getPixels();
    
    // モザイクを描く
    for (int y = 0; y < photoImage.getHeight(); y += stepSize) {
        for (int x = 0; x < photoImage.getWidth(); x += stepSize) {
            int i = (x + y * photoImage.getWidth()) * 4;
            
            int red = pixels[i];
            int green = pixels[i + 1];
            int blue = pixels[i + 2];
            ofSetColor(red, green, blue);
            
            float newX = x + ofRandom(stepSize);
            float newY = y + ofRandom(stepSize);
            ofDrawCircle(newX, newY, stepSize * 2.2);
        }
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
