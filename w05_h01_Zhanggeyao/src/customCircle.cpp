#include "customCircle.h"


void customCircle :: setup(){
	pos.set(ofGetWindowWidth()/2,ofGetWindowHeight());
	circleColor.set(ofRandom(255),ofRandom(255),ofRandom(255));

}

void customCircle :: update(ofVec2f _dest){
	pos = pos*0.5 + _dest*0.5;
}

void customCircle :: draw(int _i){
	ofSetColor(275-_i*20);
	ofCircle(pos,10-_i);
}

