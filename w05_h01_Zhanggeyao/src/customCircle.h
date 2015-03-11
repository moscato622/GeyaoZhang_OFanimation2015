#pragma once
# include "ofMain.h"
class customCircle
{
public:
	void setup();
	void update(ofVec2f _dest);
	void draw(int _i);

	ofVec2f pos;
	ofColor circleColor;
};

