#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(24);
    ofBackground(0);
    stem.initiate();
}


//--------------------------------------------------------------
void testApp::update(){
    for(int i = 0; i < wind.size(); i++){
        wind[i].move();
    }
    stem.move();
}

//--------------------------------------------------------------
void testApp::draw(){
    stem.display();
    for(int i = 0; i < wind.size(); i++){
        wind[i].display();
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    Wind w;
    w.initiate(y);
    wind.push_back(w);
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}