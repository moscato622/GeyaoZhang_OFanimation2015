#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	Pmeditation = 50.0;
	 brainWave.setup();
    brainWave.start();
	ofSetFrameRate(25);
	loading=false;
	Ptime = ofGetElapsedTimef();
	//ofRegisterURLNotification(this);
	//to load synchronously
	//image.loadImage("http://blah.com/img.jpg");

	    //string da = "http://data.sparkfun.com/output/7JQQoKAAQzi6pKp6K1WA/meditation/latest.csv";
		//string result = ofLoadURL(da).data.getText();
		//cout <<result << endl;

    // create new ofxGLSLSandbox instance
    glslSandbox = new ofxGLSLSandbox();
    
    // setup shader width and height
    glslSandbox->setResolution(800, 480);
    
    // load fragment shader file (must put in bin/data folder)
    glslSandbox->loadFile("shader");
	//heavyrain.loadSound("sounds/heavyrain.wav");
	//heavyrain.setVolume(0.75f);


	synth.loadSound("sounds/Birdssinging.wav");
	beats.loadSound("sounds/lightrain_01.wav");
	vocals.loadSound("sounds/heavyrain_01.wav");
	synth.setVolume(0.75f);
	beats.setVolume(0.75f);
	vocals.setVolume(2.0f);
	font.loadFont("Sudbury_Basin_3D.ttf", 32);
	beats.setMultiPlay(false);
	vocals.setMultiPlay(true);

	fftSmoothed = new float[8192];
	for (int i = 0; i < 8192; i++){
		fftSmoothed[i] = 0;
	}
	
	nBandsToGet = 128;
	float Ptime = ofGetElapsedTimef();

	



}
//--------------------------------------------------------------
void testApp::urlResponse(ofHttpResponse & response){
	if(response.status==200){
	    cout <<response << endl; 
		loading=false;
	}else{
		cout << response.status << " " << response.error << endl;
		if(response.status!=-1) loading=false;
	}
}

//--------------------------------------------------------------
void testApp::update(){


	ofTranslate(ofGetWindowWidth()/2,ofGetWindowHeight()/2);
	ofRotate(ofGetElapsedTimef()*10);


	EegData data = brainWave.getEegData();
    //cout << data.delta <<  endl;
    //cout << data.attention << endl;
    cout << data.meditation << endl;
	
	      time = ofGetElapsedTimef();
	
	      float easing = 0.01;
	      Pmeditation = Pmeditation+ (data.meditation/200 - Pmeditation) * easing;
		  //Pmeditation = data.meditation/300;
	      //glslSandbox->Pmeditation(Pmeditation);
	      float mv = 0.01*Pmeditation;
		  float mh = 0.016*Pmeditation;

		kMusicLoopTypeNormal;   	
	    if(data.meditation> 30){
		synth.play();
		synth.setVolume(1.0f-mv);
		
	
		beats.play();
		beats.setVolume(1.0f-mv);
		}
	
		if(data.meditation < 30){
		vocals.play();
		vocals.setVolume(1.5f-mh);
		}
	
	
	
	
	//}
		

}

//--------------------------------------------------------------
void testApp::draw(){

    // draw shader
    
    //cout <<ofGetFrameRate << endl; 
	//ofSetFrameRate(24);
	glslSandbox->draw();


    //ofSetHexColor(0xffffff);
    //ofDrawBitmapString("[f] Toggle fullscreen, [o] ToDraw new shapes, [r] Reload shader", 10, 15);
    //ofDrawBitmapString(ofToString(ofGetFrameRate(), 4), 10, 30);
	
	/*int i = 1;
	i ++;
	if (i = 300){
		i = 0;
	
	ofLoadURLAsync("http://data.sparkfun.com/output/7JQQoKAAQzi6pKp6K1WA/meditation/latest.csv");
	loading =true;
	

	string da = "http://data.sparkfun.com/output/7JQQoKAAQzi6pKp6K1WA/meditation/latest.csv";
    string result = ofLoadURL(da).data.getText();
	
	
	float meditation = ofToFloat(result);

	float easing = 0.01;
	      Pmeditation = Pmeditation+ (meditation/100 - Pmeditation) * easing;
		  float mv = 0.0020*Pmeditation;
		  float mh = 0.008*Pmeditation;
		  
	      
	      


		  	
	    if(meditation > 30){
		synth.play();
		synth.setVolume(0.75f-mv);
		
	
		beats.play();
		beats.setVolume(0.75f-mv);
		}
	
		if(meditation < 30){
		vocals.play();
		vocals.setVolume(2.0f-mh);
	
		}
	    
	
	}*/
        //beats.play();
		//beats.setVolume(0.75f);
}

void testApp::exit() {
	ofUnregisterURLNotification(this);
}
//--------------------------------------------------------------
void testApp::keyPressed(int key){
    // set key actions
    glslSandbox->keyPressed(key);



}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}
//--------------------------------------------------------------
void testApp::meditation(float meditation){
	/*int i = 1;
	i ++;
	if (i = 500){
		i = 0;*/

	
	      
	      //meditation = ofToFloat(result);

		 
		  
	      
	      


		
		//}
	

	//int i = 1;
	//i ++;
	//if (i = 300){
		//i = 0;
	
	
}
//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    // update mouse position
	
	
    glslSandbox->mouseMoved(mouseX, mouseY);
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	// continuously control the speed of the beat sample via drag,
	// when in the "beat" region:
	float widthStep = ofGetWidth() / 3.0f;
	if (x >= widthStep && x < widthStep*2){
		beats.setSpeed( 0.5f + ((float)(ofGetHeight() - y) / (float)ofGetHeight())*1.0f);
	}
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){





	



}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}