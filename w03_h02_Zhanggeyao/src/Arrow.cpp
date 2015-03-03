#include "Arrow.h"


void Arrow::setup(){
     
	pos.set(0);

}

void Arrow::update(float _x, float _y){
     
	ofVec2f newPos;
	newPos.set(_x, _y);
	pos = pos*0.97 + newPos * 0.03;

	ofVec2f diff;
	diff = newPos - pos;
	rot = atan2(diff.y,diff.x);
	rot = ofRadToDeg(rot);


}

void Arrow::draw(){
     

	
	//ofSetColor(i+(sin(ofGetElapsedTimef())+1)*125,i+ofMap(ofGetMouseX(),0,ofGetWindowWidth(),0,155),i);
	float x1 = 12;
	float y1 = 0;

	float x2 = 10;
	float y2 = 20;

	float x3 = 40;
	float y3 = 10;

	ofTranslate(pos);
	ofRotate(rot);
	ofTriangle(x1,y1,x2,y2,x3,y3);
	//pos.set(i,i);
	
}