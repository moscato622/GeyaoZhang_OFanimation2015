//
//  Particle.h
//  01_oneParticle
//
//  Created by Bernardo Schorr on 3/2/15.
//
//

#pragma once

#include "ofMain.h"

class Particle {
public:
    
    Particle(ofVec2f _pos, ofVec2f _vel);
    
    void resetForces();
    void applyForce(ofVec2f force);
    
    void update();
    void draw(float _size, int i);
    
    ofVec2f pos, vel, acc;
    float lifespan, distance;
    
};