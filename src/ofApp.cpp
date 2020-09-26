#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofBackground(241, 236, 230);
	ofFill();
	int h = 200;
	// initial for-loops create the checkerboard subdivision,  a 4x4 grid of 200x200 pixel squares. 
	// the red and grey squares are separared by the if statement using modulus
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			int x = (h + (h * i));
			int y = (h + (h* j));
			if ((i + j) % 2 == 0) {
				//Red Squares
				for (int a = 1; a < 8; a++) {
					for (int b = 1; b < 8; b++) {
						int randomNumber = (ofRandom(1, 7) - 1);
						if (randomNumber <= 4) {
							// establish local grid x + y values
							float xA = ofMap(a, 1, 8, 0, 200);
							float xB = ofMap(b, 1, 8, 0, 200);
							float wA = (xA + x);
							float vB = (xB + y);
							ofSetColor(83, 55, 50);
							// establish local grid parameters for shape building + rotation
							float g = (h / 7);
							float l = (g / 1.95);
							int r = (randomNumber * 90);
							//generate shape

							ofPushMatrix();
							ofTranslate((wA + l), (vB + l), 0);
							ofRotateZDeg(r);
							ofBeginShape();
							ofVertex(-l, -l);
							ofVertex(-l, l);
							ofVertex(l, l);
							ofEndShape();
							ofPopMatrix();
						}
						else {
							// do nothing to leave blank tiles
						}




					}
				}


			}
			//Grey Squares
			else {
				for (int c = 1; c < 8; c++) {
					for (int d = 1; d < 8; d++) {
						int rand = (ofRandom(1, 7) - 1);
						if (rand <= 4) {
							// establish local grid x + y values
							float xC = ofMap(c, 1, 8, 0, 200);
							float xD = ofMap(d, 1, 8, 0, 200);
							float wC = (xC + x);
							float vD = (xD + y);
							ofSetColor(42, 43, 45);
							// establish local grid parameters for shape building + rotation
							float g = (h / 7);
							float l = (g / 1.95);
							int r = (rand * 90);
							//generate shape
							ofPushMatrix();
							ofTranslate((wC + l), (vD + l), 0);
							ofRotateZDeg(r);
							ofBeginShape();
							ofVertex(-l, -l);
							ofVertex(-l, l);
							ofVertex(l, l);
							ofEndShape();
							ofPopMatrix();
						}
						else {
							float xC = ofMap(c, 1, 8, 0, 200);
							float xD = ofMap(d, 1, 8, 0, 200);
							float wC = (xC + x);
							float vD = (xD + y);
							ofSetColor(42, 43, 45);
							float g = (h / 7);
							float l = (g / 1.95);
							ofPushMatrix();
							ofTranslate((wC + l), (vD + l), 0);
							ofBeginShape();
							ofVertex(-l, -l);
							ofVertex(-l, l);
							ofVertex(l, l);
							ofVertex(l, -l);
							ofEndShape();
							ofPopMatrix();
						}
					}

				}




			}
		}
	}
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
