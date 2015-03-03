#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    ofSetCircleResolution(ofRandom(10));
    ofEnableSmoothing();
    ofNoFill();
    ofSetBackgroundAuto(false);
    
    circleSize = 0;
    showCoor = false;
}

//--------------------------------------------------------------
void ofApp::update(){
	 int choice = ofRandom(4);
	 if (choice == 1) ofNoFill();
	 if (choice == 2) ofFill();
	 if (choice == 3) ofNoFill();
	 ofSetCircleResolution(ofRandom(3,8));
	 ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
}

//--------------------------------------------------------------
void ofApp::draw(){
	int choice = ofRandom(6);

	if(choice <3){
	circleSize = int(ofRandom(100));
	}
	if(choice ==3) circleSize = int(ofRandom(60));
	if(choice ==4) circleSize = int(ofRandom(50));
	if(choice ==5) circleSize = int(ofRandom(200));

    circleSize = int(ofRandom(100));
	ofCircle(50, 50, circleSize-20);
	ofCircle(ofGetWidth()-50, 50, circleSize-20);
	ofCircle(ofGetWidth()-50, ofGetHeight()-50, circleSize-20);
	ofCircle(50, ofGetHeight()-50, circleSize-20);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case '1':
            ofBackground(0);
            ofEnableBlendMode(OF_BLENDMODE_MULTIPLY);
            break;
			case '2':
            ofBackground(0);
            ofEnableBlendMode(OF_BLENDMODE_ADD);
            break;
			case '3':
            ofBackground(0);
			ofEnableBlendMode(OF_BLENDMODE_SCREEN);
            break;
			case '4':
            ofBackground(0);
			ofEnableBlendMode(OF_BLENDMODE_ALPHA);
            break;
        case 'r':
            ofBackground(0);
            ofSetColor(255);
            break;
        case 's':
            showCoor =! showCoor;
        default:
            break;
    }
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    string ourMouseXPos = ofToString(x);
    string ourMouseYPos = ofToString(y);
    
    string ourDebugString = "x: " + ourMouseXPos + "\n" + "y: " + ourMouseYPos;
    
    if(showCoor){
        ofBackground(0);
        ofDrawBitmapString(ourDebugString, x+10, y-10);
    }
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    

	int choice = ofRandom(6);

	if(choice <3){
	circleSize = int(ofRandom(100));
	}
	if(choice ==3) circleSize = int(ofRandom(60));
	if(choice ==4) circleSize = int(ofRandom(50));
	if(choice ==5) circleSize = int(ofRandom(200));

    circleSize = int(ofRandom(100));
    ofCircle(x, y, circleSize);
	ofCircle(x+sin(x),y+cos(y),10);
	
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    circleSize = 0;
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
