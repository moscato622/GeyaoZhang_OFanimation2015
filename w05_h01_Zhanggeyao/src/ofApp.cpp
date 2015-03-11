#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(75);
    ofBackground(0);
    gravity.set(0, 0.0);
    
	for (int i = 0 ; i < 10; i++) {
		customCircle xeno;
		xeno.setup();
		xenoList.push_back(xeno);
	}
	start = false;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i = 0; i < systems.size(); i++) {
        systems[i].update(gravity);
    }

	if (start == true){
	ofVec2f mousePos;
	mousePos.x = ofGetMouseX();
	mousePos.y = ofGetMouseY();
	//xenoCircle.update(mousePos);

	
	xenoList[0].update(mousePos);
	
	for (int i = 1; i < xenoList.size(); i++){
		xenoList[i].update(xenoList[i-1].pos);
	 }
	}


	for(int i = 0; i < xenoList.size(); i++) {
		mouse.set(ofGetMouseX(),ofGetMouseY());
		if (xenoList[xenoList.size()-1].pos==mouse){
		    
			start = false;


			
		   xenoList[i].setup();
		
		

	        cout<<start <<endl;

		}
	}

	

}

//--------------------------------------------------------------
void ofApp::draw(){



	for(int i = 0; i < xenoList.size(); i++) {
		xenoList[i].draw(i);
	}






    for (int i = 0; i < systems.size(); i++) {
        systems[i].draw();
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

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	start = true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    particleSystem system(ofVec2f(x, y));
    systems.push_back(system);


	

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