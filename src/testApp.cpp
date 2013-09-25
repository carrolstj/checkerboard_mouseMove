#include "testApp.h"
//--------------------------------------------------------------
int posX;
int posY;
int m;
int n;

void testApp::setup(){
    ofBackground(0, 0, 0);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    for (int posX=0; posX<500; posX+=100) {
        for (int posY=0; posY<500; posY+=100) {
            if (posX/100%2==posY/100%2) {
                ofSetColor(120, 180, 250);
                ofRect(posX, posY, 100, 100);
            }
            else{
                ofSetColor(240, 30, 5);
                ofRect(posX, posY, 100, 100);
            }
        }
        
        ofSetColor(240, 230, 5);
        ofRect(m*100, n*100, 100, 100);
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    m=floor(x/100);
    n=floor(y/100);
    cout << m << ',' << n << "\n";
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
