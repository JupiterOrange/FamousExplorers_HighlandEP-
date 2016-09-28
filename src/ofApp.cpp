#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    string path = "/Users/rheugle/Documents/Ravi/CreativeCoding/of_v0.9.3_osx_release/apps/myApps/FEAlbumArt/bin/data/butterfly1.png";
    pic.load(path);
    ofLoadImage(pix, path);
    ofBackground(255,255,255);
    ofSetBackgroundAuto(false);

    ofSetLineWidth(10.0);
    
    width = pic.getWidth()/scale;
    height = pic.getHeight()/scale;
    
    ofSetWindowShape(width, height);

}

//--------------------------------------------------------------
void ofApp::update(){
        t+=1;
}

//--------------------------------------------------------------
void ofApp::draw(){


    int n = 100;
    double xs[n];
    double ys[n];
    for (int m=0;m<n;m++){
        xs[m]=(float)m/(float)n;
        ys[m]=(float)m/(float)n;
    }
    
    if (t<1000){

        ofLog(OF_LOG_NOTICE, ofToString(t));
        
        for (int i=0;i<1000;i++){
            
            int x = xs[(int)ofRandom(n)]*width;
            int y = ys[(int)ofRandom(n)]*height;
            
            int r1 = ofRandom(0,3);
            int r2 = ofRandom(0,3);
            
            int d = ofRandom(0,40);
            int xr[] = {-d,d,0};
            int yr[] = {-d,d,0};
            
            int x1 = x + xr[r1];
            int y1 = y + yr[r2];
            
            
            ofColor colorAtXY = pic.getColor(x*scale, y*scale);
            ofSetColor(colorAtXY);

            ofPolyline lin;
            lin.addVertex(x,y);
            lin.addVertex(x1,y1);
            lin.draw();
            
        }

        ofPolyline lin1;
        ofSetColor(ofColor(255));
        lin1.addVertex(0,ofRandom(0,height));
        lin1.addVertex(width,ofRandom(0,height));
        lin1.draw();
        
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
