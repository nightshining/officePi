#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(ofColor::black);

    mesh.setMode(OF_PRIMITIVE_LINE_LOOP);

    
    time = 0.0;
    noise = 0.0;

    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
  

    //Begin Mesh Total Size
        
    mesh.clearVertices();
    mesh.clearColors();
    time = ofGetElapsedTimef() * 3.0;
    
    for (float u = 0.0; u < TWO_PI; u += PI / 50) {
        
        for (float v = 0.0; v < PI; v += PI / 100) {
            
            float size = 150;
            float x = sin(time + u) * size;
            float y = sin(v + u) * ofNoise(u + time) * size;
            float z = sin(u * cos(v)) * size;
            
            ofFloatColor c = ofFloatColor(1.,0.9,0.9, u * 0.10);
            mesh.addColor(c);
            
            ofVec3f vec = ofVec3f(x,y,z);
            mesh.addVertex(vec);
            
        }
    }
    
    cout << "Frame Rate: " << ofGetFrameRate() << endl;
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    float x = ofGetElapsedTimef() * 3.0;
    
    ofPushMatrix();
    ofTranslate(ofGetWidth() * .5, ofGetHeight() * .5);
    ofRotateX(x);
    ofRotateY(x);
    ofRotateZ(x);
    mesh.draw();
    ofPopMatrix();
    
    
    ofVec2f mousePos = ofVec2f(ofGetMouseX(), ofGetMouseY());
    ofCircle(mousePos, 5);
    
    
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
