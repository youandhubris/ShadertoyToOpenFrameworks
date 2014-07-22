/*
 ---------------------------------------------
 FROM SHADERTOY TO OPENFRAMEWORKS
 ---------------------------------------------
 BY HUBRIS [http://cargocollective.com/hubris]
 [http://github.com/youandhubris]
 BERLIN á JULY 2014
 ---------------------------------------------
 BETA VERSION
 ---------------------------------------------
 */

#pragma once

#include "ofMain.h"

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
    
    ofShader shadertoy;
    ofImage color_noise, gray_rock, shell, vulcanic_rock;
    int draggedX, draggedY, clickX, clickY;
		
};
