#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    yaml.load("config.yaml");

    int framerate = yaml["frameRate"].as <int>();
    bool verticalSync = yaml["verticalSync"].as <bool>();
    string title = yaml["title"].as <string>();

    // Getting OF vectors example
    ofVec3f ofVecPos = yaml["pos"].as <ofVec3f>();
    ofPoint ofPointPos = yaml["pos"].as <ofPoint>();

    ofSetFrameRate(framerate);
    ofSetVerticalSync(verticalSync);
    ofSetWindowTitle(title);

    ofLogNotice() << "Vertical Sync enabled: " << verticalSync;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(20);
    stringstream ss;
    ss << "title " << yaml["title"].as <string>();
    ofDrawBitmapString(ss.str(), 20, 30);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
