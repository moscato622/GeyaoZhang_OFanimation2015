//
//  Particle.cpp
//  03_flowField
//
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

void Particle::update(float _x,float _y, float _speed) {
    vel += acc-0.001;
	pos += vel*_speed;
	speed = _speed;
    //pos += vel*abs(ofNoise(sin(ofGetElapsedTimef())));

	
    
}

void Particle::draw() {
	//ofSetColor(255);
	if(pos.x < 20 || pos.x > ofGetWindowWidth()-20 || pos.y < 20 || pos.y > ofGetWindowHeight()-20){
		
	
        pos.x = ofRandom(ofGetWindowWidth());
		pos.y = ofRandom(ofGetWindowHeight()/2);
	
	}
	/*if(ofGetMousePressed()==1){
		ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));}
	else{
		ofSetColor(255);}*/

	
	//cout<<ofGetMousePressed()<<endl;
	
	ofSetColor(255);
	ofCircle(pos,abs(sin(vel.x)*cos(vel.y)*5));
	/////////////////Size flows beats/////////////////////
	//ofCircle(pos,abs(vel.x*vel.y*speed));
	

	
	
	
   // ofCircle(pos, ofMap(sin(vel.x/vel.y),0,1,1,5));
	
}