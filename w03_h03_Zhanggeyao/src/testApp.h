#pragma once
#include "ofMain.h"
#include "ofxGLSLSandbox.h"
#include "ofURLFileLoader.h"
#include "ofxBrainWave.h"



class testApp : public ofBaseApp{
public:

	
	
    void setup();
    void update();
    void draw();
	void exit();
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
	void urlResponse(ofHttpResponse & response);
    void meditation(float meditation);
        ofxGLSLSandbox *glslSandbox;

	    ofSoundPlayer heavyrain;

	    ofSoundPlayer  beats;
		ofSoundPlayer  synth;
		ofSoundPlayer  vocals;
		ofSoundPlayer  song;

		ofTrueTypeFont	font;
		ofxBrainWave brainWave;
		float Pmeditation;
		float synthPosition;
		float * fftSmoothed;
		float time;
		float Ptime;
		int nBandsToGet;
		string result;

		bool loading;
  
};