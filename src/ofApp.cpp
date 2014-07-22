#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofDisableArbTex();
    
    shadertoy.load("shader/shadertoy");
    
    color_noise.loadImage("textures/color_noise.jpg");
    gray_rock.loadImage("textures/gray_rock.jpg");
    shell.loadImage("textures/shell.jpg");
    vulcanic_rock.loadImage("textures/vulcanic_rock.jpg");
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetWindowTitle(ofToString(ofGetFrameRate()));
    
    shadertoy.begin();
    shadertoy.setUniform3f("iResolution", ofGetWidth(), ofGetHeight(), 0.0);
    shadertoy.setUniform1f("iGlobalTime", ofGetElapsedTimef());
    shadertoy.setUniform4f("iMouse", draggedX, draggedY, clickX, clickY);
    shadertoy.setUniformTexture("iChannel0", color_noise, 1);
    shadertoy.setUniformTexture("iChannel1", gray_rock, 2);
    shadertoy.setUniformTexture("iChannel2", shell, 3);
    shadertoy.setUniformTexture("iChannel3", vulcanic_rock, 4);
    shadertoy.setUniform4f("iDate", ofGetYear(), ofGetMonth(), ofGetDay(), ofGetSeconds());
    
    ofRect(0, 0, ofGetWidth(), ofGetHeight());
    
    shadertoy.end();

    /* TO DO
    uniform float     iChannelTime[4];       // channel playback time (in seconds)
    uniform vec3      iChannelResolution[4]; // channel resolution (in pixels)
    */
    
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
    
    draggedX = x;
    draggedY = y;

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    clickX = x;
    clickY = y;

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
