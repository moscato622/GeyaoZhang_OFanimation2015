//
//  particleSystem.cpp
//  01_manyParticles
//
//  Created by Bernardo Schorr on 3/2/15.
//
//

#include "particleSystem.h"

particleSystem::particleSystem(ofVec2f _pos){
    pos = _pos;
	hasReached = false;
}

//--------------------------------------------------------------
void particleSystem::update(ofVec2f _force){
 
	if (hasReached ==  false) {
    for (int i = 0; i < 10; i++) {
        Particle particle(pos);
        particleList.push_back(particle);
        
     }
	}
    
    for (int i = 0; i < particleList.size(); i++) {
        particleList[i].resetForces();
        particleList[i].applyForce(_force);
        particleList[i].update();
    }

	if(particleList.size() > 1000){
		hasReached = true;
	}
	

   /// while (particleList.size() > 1000) {
      //  particleList.erase(particleList.begin());
	
	    //particleList.clear();
		 
  //  }
	
    
}

//--------------------------------------------------------------
void particleSystem::draw(){
    for (int i = 0; i < particleList.size(); i++) {
        particleList[i].draw();
    }
    cout << particleList.size()<<endl;
}