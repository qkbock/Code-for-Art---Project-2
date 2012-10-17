#pragma once
#include "ofMain.h"

class Wind {
public:
    // -------------------------
    void initiate(float ypos){
        radius = 2;
        position.x = 0;
        position.y = ypos;
        velocity.x = ofRandom(1, 2);
        velocity.y = 0;
        color = 255;
        alpha = 50;
    }
    
    // -------------------------
    void move(){
        velocity.y = ofRandom(-.5, .5);
        position += velocity;
        
        if(position.x > ofGetWidth()+radius) {
            position.x = -radius;
        }
        if(position.x < -radius) {
            position.x = ofGetWidth()+radius;
        }
        if(position.y > ofGetHeight()+radius) {
            position.y = -radius;
        }
        if(position.y < -radius) {
            position.y = ofGetHeight()+radius;
        }
    }
    
    // -------------------------
    void display(){
        ofEnableAlphaBlending();
        ofSetColor(color, alpha);
        ofCircle(position, radius);
        ofDisableAlphaBlending();
    }
        
    // -------------------------
    ofPoint position;
    ofPoint velocity;
    ofColor color;
    float alpha;
    float radius;
};
