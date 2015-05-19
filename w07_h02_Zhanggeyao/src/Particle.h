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
    void applyForce(ofVec3f force);
    void applyDampingForce(float damping);
    
    void update(float _x, float _y, float _speed);
    void draw();
    
	float speed;
    ofVec3f pos, vel, acc;
    
};