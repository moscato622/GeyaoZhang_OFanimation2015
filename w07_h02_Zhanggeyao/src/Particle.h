//
//  Particle.h
//  03_flowField
//
//
//

#pragma once
#include "ofMain.h"

class Particle {
public:
    
    void setup();
    
    void resetForces();
    void applyForce(ofVec2f force);
    void applyDampingForce(float damping);
    
    void update(float _x, float _y, float _speed);
    void draw();
    
	float speed;
    ofVec2f pos, vel, acc;
    
};