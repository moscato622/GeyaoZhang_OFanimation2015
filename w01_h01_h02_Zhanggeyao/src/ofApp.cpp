#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	a = ofRandom(50,100);
	b = ofRandom(50,100);
	c = 20;
	d = 255;
	speedx = ofRandom(-4,4);
	speedy = ofRandom(-4,4);
	ofSetCircleResolution(60);
	
	
	
	
	
	ofCircle(a+speedx,b+speedy,c);
	

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	a += speedx;
	b += speedy;

	
	

	ofCircle(a+speedx,b+speedy,c);

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
	
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	//d=10;
	c = 200;
	//showCoor =true;
	
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	speedx = (x - a)/100;
	speedy = (y - b)/100;
	c = 20;
	
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
