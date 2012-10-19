#pragma once
#include "ofMain.h"

#define STEM_LENGTH 5

class Stem {
public:
    // -------------------------
    void initiate(){
        for(int i = 0; i < STEM_LENGTH; i++){
            stem[i].x = 0;
            stem[i].y = -i*50;
        }
        stemTranslation.x = ofGetWidth()/2;
        stemTranslation.y = ofGetHeight();

    }
    
    // -------------------------
    void move(){
        for(int i = 0; i < STEM_LENGTH; i++){
            stem[i].x += (i*10);
        }
    }
    
    // -------------------------
    void straightenOut(){
        
    }
    
    // -------------------------
    void display(){
        ofSetColor(255);
        ofSetLineWidth(5);
        ofNoFill();
        ofPushMatrix();
            ofTranslate(stemTranslation);
            ofBeginShape();
            ofCurveVertex(stem[0]);
            for(int i = 0; i< STEM_LENGTH; i++){
                ofCurveVertex(stem[i]);
            }
            ofCurveVertex(stem[STEM_LENGTH-1]);
            ofEndShape();
        ofPopMatrix();
    }
    
    // -------------------------
    float width;
    ofPoint stem[STEM_LENGTH];
    ofPoint stemTranslation;
    float percentage;
    float stemMove;
};
