//
//  Particle.cpp
//  01_oneParticle
//
//  Created by Bernardo Schorr on 3/2/15.
//
//

#include "Particle.h"

Particle::Particle(ofVec2f _pos) {
    pos.set(_pos);
	float a,r;
	a=ofRandom(0,360);
	r=2;

	vel.x = cos(a)*r;
	vel.y = sin(a)*r;
    //vel.x = ofRandom(-2, 2);
    //vel.y = ofRandom(-1, -5);
    lifespan = 200;
}

void Particle::setup() {
    
}

void Particle::resetForces() {
    acc *= 0;
}

void Particle::applyForce(ofVec2f force) {
    acc += force;
}

void Particle::update() {
    vel += acc;
    pos += vel;
    
   lifespan -= 3.0;
    
}

void Particle::draw() {
    ofSetColor(lifespan+ofRandom(255),lifespan+ofRandom(255),lifespan+ofRandom(255));
    ofCircle(pos, ofRandom(10));
}
