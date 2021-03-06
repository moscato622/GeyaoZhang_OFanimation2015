#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	ofBackground(0);
	//ofSetBackgroundAuto(false);
	//ofSetFrameRate(60);
	beats.loadSound("sounds/1085.mp3");
	beats.setVolume(0.75f);
	beats.setMultiPlay(false);

	fftSmoothed = new float[8192];
	for (int i = 0; i < 8192; i++){
		fftSmoothed[i] = 0;
	}
	
	nBandsToGet = 128;

	angle = 0.0;
	radius = 100.0;
	

}

//--------------------------------------------------------------
void ofApp::update(){
	
		ofSoundUpdate();


		float * val = ofSoundGetSpectrum(nBandsToGet);

		cout << * val << endl;// request 128 values for fft
		size = ofMap( * val ,0,2,5,30);
	    for (int i = 0;i < nBandsToGet; i++){
		
		// let the smoothed calue sink to zero:
		fftSmoothed[i] *= 0.96f;
		
		// take the max, either the smoothed or the incoming:
		if (fftSmoothed[i] < val[i]) fftSmoothed[i] = val[i];
		
	}
	
}

//--------------------------------------------------------------
void ofApp::draw(){

		

	float c = (ofMap(sin(ofGetElapsedTimef()),-1,1,0,255)-20);

	for(int i =1; i<8; i++){
		float sinOfTime = sin( ofGetElapsedTimef()*i/10);
		radius += sinOfTime*0.002*size;
	float sinOfTime2 = sin( ofGetElapsedTimef()*(i+10)/10);
	radius2 += sinOfTime2*0.002*size;
	//float x = ofGetMouseX()+i*10;
	//float y = ofGetMouseY()+sinOfTime * 200;
	//float x2 = ofGetMouseX()+(i+10)*10;
	//float y2 = ofGetMouseY()+sinOfTime2 * 200;
	angle++;
	float x = cos(ofDegToRad(angle/10*i))*radius+ofGetMouseX();
	float y = sin(ofDegToRad(angle/10*i))*radius+ofGetMouseY() ;
	float x2 = cos(ofDegToRad(angle/10*(i+3)))*radius+ofGetMouseX();
	float y2 = sin(ofDegToRad(angle/10*(i+3)))*radius+ofGetMouseY();


	ofSetColor(i*c,i*size+30,i*10+c);
	ofLine(x,y,x2,y2);
	}

	for(int i =1; i<8; i++){
	float sinOfTime = sin( ofGetElapsedTimef()*i/10);
	radius += sinOfTime*0.002*size;
	float sinOfTime2 = sin( ofGetElapsedTimef()*(i+10)/10);
	//float x = ofGetMouseX()+i*10;
	//float y = ofGetMouseY()+sinOfTime * 200;
	angle++;
	float x = cos(ofDegToRad(angle/10*i))*radius+ofGetMouseX();
	float y = sin(ofDegToRad(angle/10*i))*radius+ofGetMouseY();

	//float r = ofMap(sin( ofGetElapsedTimef()),-1,1,3,6);
	//ofSetCircleResolution(3);

	ofSetColor(i*c,i*size+30,i*10+c);
	
	ofCircle(x,y,size);
	}
	

	/*for(int i =1; i<16; i++){
	float sinOfTime = sin( ofGetElapsedTimef()*-i);
	float x = i*60;
	float y = ofGetHeight()/2+sinOfTime * 100;
	ofSetColor(i*10+c,i*10+c,i+100);
	ofCircle(x,y,10);
	}*/

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
	float widthStep = ofGetWidth() / 3.0f;
	if (x >= widthStep && x < widthStep*2){
		beats.setSpeed( 0.5f + ((float)(ofGetHeight() - y) / (float)ofGetHeight())*1.0f);
	}
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	beats.play();
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
