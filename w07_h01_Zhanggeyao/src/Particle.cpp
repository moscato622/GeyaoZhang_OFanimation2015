//
//  Particle.cpp
//  03_flowField
//
//  Created by Bernardo Santos Schorr on 3/31/15.
//
//

#include "Particle.h"

void Particle::setup() {
    pos.x = ofRandomWidth();
    pos.y = ofRandomHeight();
}

void Particle::resetForces() {
    acc *= 0;
}

void Particle::applyForce(ofVec2f force) {
    acc += force;
}

void Particle::applyDampingForce(float damping) {
    acc -= vel.getNormalized() * damping;
}

void Particle::update() {
    vel += acc;
    pos += vel;
    
}

void Particle::draw() {
    ofCircle(pos, 1);
	if(pos.x < 20 || pos.x > ofGetWindowWidth()-20 || pos.y < 20 || pos.y > ofGetWindowHeight()-20){
		
	
        pos.x = ofRandom(ofGetWindowWidth());
		pos.y = ofRandom(ofGetWindowHeight()/2);
	
	}
}