#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0);
		count=1;

		

		a=1;
		time += a;
		for (int i = 0; i < 60; i++){
		h1[i]= ofNoise(ofRandom(0,1))*70;	
		h2[i]= ofNoise(ofRandom(0,1))*70;		
		h3[i]= ofNoise(ofRandom(0,1))*70;	
		h4[i]= ofNoise(ofRandom(0,1))*70;	
		h5[i]= ofNoise(ofRandom(0,1))*70;
		h6[i]= ofNoise(ofRandom(0,1))*70;
		h7[i]= ofNoise(ofRandom(0,1))*70;
		h8[i]= ofNoise(ofRandom(0,1))*70;
		h9[i]= ofNoise(ofRandom(0,1))*70;	
		h10[i]= ofNoise(ofRandom(0,1))*70;
		h11[i]= ofNoise(ofRandom(0,1))*70;
		h12[i]= ofNoise(ofRandom(0,1))*70;	
		h13[i]= ofNoise(ofRandom(0,1))*70;
		h14[i]= ofNoise(ofRandom(0,1))*70;	
		h15[i]= ofNoise(ofRandom(0,1))*70;	
		h16[i]= ofNoise(ofRandom(0,1))*70;	
		h17[i]= ofNoise(ofRandom(0,1))*70;	
		h18[i]= ofNoise(ofRandom(0,1))*70;	
		h19[i]= ofNoise(ofRandom(0,1))*70;
		h20[i]= ofNoise(ofRandom(0,1))*70;
		h21[i]= ofNoise(ofRandom(0,1))*70;
		h22[i]= ofNoise(ofRandom(0,1))*70;	
		h23[i]= ofNoise(ofRandom(0,1))*70;	
		h24[i]= ofNoise(ofRandom(0,1))*70;
		h25[i]= ofNoise(ofRandom(0,1))*70;
	}
	
	
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	for (int i = 0; i < 60; i++){
		ofSetColor(0);
		
	ofRect(i*20+a,100,20,-h1[i]);
	
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(10);
	ofRect(i*20+1.5*a,60*1.5+20,20+5,-h2[i]*1.5);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(20);
	ofRect(i*20+2*a,60*2+30,20+10,-h3[i]*2);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(30);
	ofRect(i*20+2.5*a,60*2.5+50,20+15,-h4[i]*2.5);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(40);
	ofRect(i*20+3*a,60*3+70,20+20,-h5[i]*3);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(50);
	ofRect(i*20+3.5*a,60*3.5+100,20+25,-h6[i]*3.5);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(60);
	ofRect(i*20+4*a,60*4+110,130+30,-h6[i]*4);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(70);
	ofRect(i*20+4.5*a,60*4.5+120,20+35,-h7[i]*4.5);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(80);
	ofRect(i*20+5*a,60*5+130,20+40,-h8[i]*5);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(90);
	ofRect(i*20+5.5*a,60*5.5+140,20+50,-h9[i]*5.5);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(100);
	ofRect(i*20+6*a,60*6+150,20+60,-h10[i]*6);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(110);
	ofRect(i*20+6.5*a,60*7.5+160,20+70,-h11[i]*7.5);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(120);
	ofRect(i*20+7*a,60*8+170,20+80,-h12[i]*8);
	}for (int i = 0; i < 60; i++){
		ofSetColor(130);
	ofRect(i*20+7.5*a,60*8.5+180,20+100,-h13[i]*8.5);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(140);
	ofRect(i*20+8*a,60*9+190,20+120,-h14[i]*9);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(150);
	ofRect(i*20+8.5*a,60*9.5+200,20*+140,-h15[i]*9.5);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(160);
	ofRect(i*20+9*a,60*10+220,20+180,-h16[i]*10);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(170);
	ofRect(i*20+9.5*a,60*10.5+250,20+220,-h17[i]*10.5);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(180);
	ofRect(i*20+10*a,60*11+270,20+260,-h18[i]*11);
	}for (int i = 0; i < 60; i++){
		ofSetColor(190);
	ofRect(i*20+10.5*a,60*11.5+300,20+300,-h19[i]*11.5);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(200);
	ofRect(i*20+11*a,60*12+330,20+350,-h20[i]*12);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(210);
	ofRect(i*20+11.5*a,60*12.5+350,20+400,-h21[i]*12.5);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(220);
	ofRect(i*20+12*a,60*13+370,20+450,-h22[i]*13);
	}
	for (int i = 0; i < 325; i++){
		ofSetColor(230);
	ofRect(i*20+12.5*a,60*13.5+400,20+500,-h23[i]*13.5);
	}
	for (int i = 0; i < 60; i++){
		ofSetColor(240);
	ofRect(i*20+13*a,60*14+420,20+550,-h24[i]*14);
	}for (int i = 0; i < 60; i++){
		ofSetColor(255);
	ofRect(i*20+13.5*a,60*14.5+450,20+600,-h25[i]*14.5);
	}
	
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	a= (x-500)/50-10;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

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
