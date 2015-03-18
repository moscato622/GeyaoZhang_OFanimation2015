//
//  Particle.cpp
//  01_oneParticle
//
//  Created by Bernardo Schorr on 3/2/15.
//
//

#include "Particle.h"

Particle::Particle(ofVec2f _pos, ofVec2f _vel) {
    vel = _vel;
    pos = _pos;
    lifespan = 50;
	distance = 1;
}

void Particle::resetForces() {
    acc *= 0;
}

void Particle::applyForce(ofVec2f force) {
    acc += force;
}

void Particle::update() {
    vel += acc;

	pos.x += tan(vel.x*distance/10);
	pos.y += tan(vel.y*distance/10);
    //pos += vel;
    
    if (lifespan > 0) lifespan -= 0.2;
    
}

void Particle::draw(float _size, int i) {
	distance = _size;
	float c = (ofMap(sin(ofGetElapsedTimef()),-1,1,0,255)-20);
	ofNoFill();
    ofSetColor(abs(i*lifespan*c),abs(i*lifespan),abs(i*10*lifespan));
    ofCircle(pos, _size);
}
