#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(100);
    
    pos.set(ofGetWindowSize()/2);
    vel.x = ofRandom(-10, 10);
    vel.y = ofRandom(-2, -5);
	acc.x = 0;
	acc.y = 0;
    
    gravity.set(0, 0.5);

}

//--------------------------------------------------------------
void ofApp::update(){
    
    pos += vel;
	vel += acc;
    vel += gravity;
    

	if(pos.x > ofGetWidth()){
	    
		pos.x = ofGetWidth()- size/2;
		vel.x *= -1;
	
	}
	if(pos.x < 0){
	
		pos.x = size/2;
		vel.x *= -1;
	
	}

	if(pos.y > ofGetHeight()){
	
		pos.y = ofGetHeight()- size/2;
		vel.y *= -1;
	
	}
	if(pos.y < 0){
	
		pos.y = size/2;
		vel.y *= -1;
	
	}


   /* if (pos.x > ofGetWidth() || pos.x < 0) {
		
        vel.x *= -1;
    }
    
    if (pos.y > ofGetHeight() || pos.y < 0) {
        vel.y *= -1;
    }*/

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0,vel.y*10,vel.x*5);
	size = vel.x/2;
    ofCircle(pos, size);
    
    ofSetColor(255, 0, vel.x);
    drawVectorAt(vel, pos.x, pos.y);

}

//--------------------------------------------------------------
void ofApp::drawVectorAt (ofVec2f vec, float x, float y) {
    
    ofPushMatrix();
        ofTranslate(x, y);
        ofLine(0, 0, vec.x, vec.y);
    ofPopMatrix();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	
	vel.x += (ofGetMouseX()-ofGetPreviousMouseX())/10;
	vel.y += (ofGetMouseY()-ofGetPreviousMouseY())/10;
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	//pos.x = x;
	//pos.y = y;

	 
		
        vel.x = 0;
		vel.y = 0;
		pos.x = x;
		pos.y = y;
        gravity.set(0, 0.0);
    
   
	
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	gravity.set(0, 0.5);
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}