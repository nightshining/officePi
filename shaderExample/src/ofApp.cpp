
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //  Load and compile the shader
    //
    shader.load("","shader.frag");
    ofSetCircleResolution(60);
    ofBackground(ofColor::whiteSmoke);
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // Replace the pipeline with our shader
    shader.begin();
    
    // Send uniforms
    shader.setUniform1f("u_time", ofGetElapsedTimef());
    shader.setUniform2f("u_mouse", mouseX, mouseY);
    shader.setUniform2f("u_resolution", ofGetWidth(), ofGetHeight());
    for ( int i = 0; i < 4; i++ ) {
        for ( int j = 0; j < 4; j ++) {
        
    ofCircle(ofGetWidth() * .20 + i * 200, ofGetHeight() * .10 + j * 200 , 75);
    
        }
    }
    shader.end();
    
    //cout << "This is MouseX: " << mouseX << endl;
    //cout << "This is MouseY: " << mouseY << endl;
    
    ofSetColor(0);
    ofDrawBitmapString(ofToString(ofGetFrameRate()), 50, 50);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    //  Reload everytime you press a key
    //
    shader.load("","shader.frag");
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
