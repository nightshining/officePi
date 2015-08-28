#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(ofColor::crimson);
    //ofBackground(255);
    mesh.resize(2);
    
    for (int i = 0; i < mesh.size(); i++) {
    mesh[i].setMode(OF_PRIMITIVE_POINTS);
    }
    
    time = 0.0;
    noise = 0.0;
    

    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
  
    for (int m = 0; m < mesh.size(); m++) {
    //Begin Mesh Total Size
        
    mesh[m].clearVertices();
    mesh[m].clearColors();
    time = ofGetElapsedTimef() * 3.0;
    
    for (float u = 0.0; u < PI; u += PI / 100) {
        
        for (float v = 0.0; v < PI; v += PI / 100) {
            
            float size = 150;
            float x = sin(time + u / 2) * size;
            float y = sin(v + u) * ofNoise(u + time) * size;
            float z = sin(u * cos(v)) * size + 50;
            
            ofFloatColor c = ofFloatColor(0.,0.,0., u * 0.25);
            ofFloatColor c2 = ofFloatColor(240.,240.,240., u * 0.05);

            mesh[0].addColor(c);
            mesh[1].addColor(c2);
            
            ofVec3f vec = ofVec3f(x,y,z);
            mesh[m].addVertex(vec);
            
        }
    }
    
    
        //Mesh End Loop
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int m = 0; m < mesh.size(); m++) {

    
    float x = ofGetElapsedTimef() * 3.0;
    
    ofPushMatrix();
    ofTranslate(ofGetWidth() * .5 + m * 5, ofGetHeight() * .5 + m * 10);
    ofRotateX(x);
    ofRotateY(x);
    ofRotateZ(x);
    mesh[m].draw();
    ofPopMatrix();
    
    ofSetColor(0);
    ofFill();
    ofVec2f mousePos = ofVec2f(ofGetMouseX(), ofGetMouseY());
    ofCircle(mousePos, 5);
    
    }
}



void ofApp::exit() {
    
    
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
