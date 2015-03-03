#pragma once

#include "ofMain.h"
#include "rect.h"
class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		int h1[60];
		int h2[60];
		int h3[60];
		int h4[60];
		int h5[60];
		int h6[60];
		int h7[60];
		int h8[60];
		int h9[60];
		int h10[60];
		int h11[60];
		int h12[60];
		int h13[60];
		int h14[60];
		int h15[60];
		int h16[60];
		int h17[60];
		int h18[60];
		int h19[60];
		int h20[60];
		int h21[60];
		int h22[60];
		int h23[60];
		int h24[60];
		int h25[60];
		customRect rect[60];
		int count;
		float a;
		float b;
		float time;
		
	
    
};
		

