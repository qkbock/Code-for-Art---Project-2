#pragma once

#define STEM_LENGTH 50

class Stem {
public:
    // -------------------------
    void initiate(){
        width = 4;
        for(int i = 0; i < STEM_LENGTH; i++){
            stem[i].x = 0;
            stem[i].y = i*3;
        }
    }
    
    // -------------------------
    void move(){
      
    }
    
    // -------------------------
    void display(){
        for(int i = 0; i < STEM_LENGTH; i++){
            ofSetColor(255);
            ofPushMatrix();
            ofTranslate(ofGetWidth()/2, ofGetHeight()-STEM_LENGTH*5);
            ofCircle(stem[i], width);
            ofPopMatrix();
        }
    }
    
    // -------------------------
    float width;
    ofPoint stem[STEM_LENGTH];
};
