#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);
    
	speed =1;
    flowField.setup(ofGetWidth(), ofGetHeight(), 20.0);
    //flowField.setRandom(2.0);
    flowField.setNoise(0.1,0.1);
    
    for (int i = 0; i < 5000; i++) {
        Particle myParticle;
        myParticle.setup();
        particles.push_back(myParticle);
    }
    
    bDrawField = false;
    bDrawBackground = true;

	///////////////////////Sound//////////////////////////

	beats.loadSound("sounds/1085.mp3");
	beats.setVolume(0.75f);
	beats.setMultiPlay(false);

	fftSmoothed = new float[8192];
	for (int i = 0; i < 8192; i++){
		fftSmoothed[i] = 0;
	}
	
	nBandsToGet = 128;

	N = ofNoise(ofRandom(ofGetElapsedTimef()));

}

//--------------------------------------------------------------
void ofApp::update(){
	flowField.setNoise(sin(ofGetElapsedTimef())/10,sin(ofGetElapsedTimef())/10);
    
    for (int i = 0; i < particles.size(); i++){
        
        particles[i].resetForces();
        
        //get the force of the flowfield at the particle position
        ofVec2f frc = flowField.getForceAt(particles[i].pos.x, particles[i].pos.y);
        
        //apply force to the particle
        particles[i].applyForce(frc);
        particles[i].applyDampingForce(0.01);
        particles[i].update(0,0,speed);
        
    }



	///////////////////////Sound//////////////////////////

	ofSoundUpdate();


		float * val = ofSoundGetSpectrum(nBandsToGet);

		//cout << * val << endl;// request 128 values for fft
		speed = ofMap( abs(* val) ,0,2,0.1,3);
		cout << speed << endl;
	    for (int i = 0;i < nBandsToGet; i++){
		
		// let the smoothed calue sink to zero:
		fftSmoothed[i] *= 0.96f;
		
		// take the max, either the smoothed or the incoming:
		if (fftSmoothed[i] < val[i]) fftSmoothed[i] = val[i];
		
	}

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255, 0, 0);
    
    if(bDrawBackground) ofBackground(0);
    if (bDrawField) flowField.draw();
    
    ofSetColor(255);
    for (int i = 0; i < particles.size(); i++){
        particles[i].draw();
    }



//////////////////////////Draw Lines/////////////////////////////
	
	for (int i = 0; i < particles.size(); i++){
		    ofSetColor(255,40);
			//if(particles[i].pos.x-particles[j].pos.x<10&&particles[i].pos.y-particles[j].pos.y<10){


			///////////////The number after i, can effect the feeling of lines. Smaller number looks more alive//////////////////
			ofLine(particles[i].pos,particles[i+10].pos);
			
			//}

		}
   




	/*for (int i = 0; i < particles.size(); i++){
		for (int j = 0; j < particles.size(); j++){
			//if(particles[i].pos.x-particles[j].pos.x<10&&particles[i].pos.y-particles[j].pos.y<10){
			ofLine(particles[i].pos,particles[j].pos);
			
			//}

		}
    }*/
    
    stringstream buf;
    
    buf << "Press 'f' to toggle flowfield draw" << endl <<
    "Press 'b' to toggle background draw" << endl;
    
    ofDrawBitmapString(buf.str(), 20, 20);

	


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    switch (key) {
        case 'f' | 'F':
            bDrawField = !bDrawField;
            break;
        case 'b' | 'B' :
            bDrawBackground = !bDrawBackground;
            break;

	    case 'p' | 'P' :
			beats.play();
            
        default:
            break;
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	for (int i = 0; i < particles.size(); i++){
	particles[i].update(x,y,speed);
	}
	flowField.setNoise(ofMap(x,0,ofGetWindowWidth(),0.1,0.5),ofMap(y,0,ofGetWindowHeight(),0.1,0.5));

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