#include "rect.h"


void customRect :: setup(){
	 ofSetColor(0,255,0);
	 a = 1;
	 b = 10;

	 ofRect(a*20,60,20,ofRandom(20,50));
}
void customRect::update(){
	
	 //ofRect(a*20,60,20,ofRandom(20,50)*b);

}
void customRect :: draw(){
	
	 ofRect(a*20,60,20,b);

}