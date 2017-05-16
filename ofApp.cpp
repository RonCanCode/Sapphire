
// /////////////////////////////////////////////////////////// //
//        ___           ___           ___           ___        //
//       /  /\         /  /\         /  /\         /  /\       //
//      /  /::\       /  /::\       /  /::\       /  /::\      //
//     /  /:/\:\     /  /:/\:\     /  /:/\:\     /  /:/\:\     //
//    /  /:/  \:\   /  /:/  \:\   /  /:/  \:\   /  /:/  \:\    //
//   /__/:/_\_ \:\ /__/:/ \__\:\ /__/:/ \__\:\ /__/:/_\_ \:\   //
//   \  \:\__/\_\/ \  \:\ /  /:/ \  \:\ /  /:/ \  \:\__/\_\/   //
//    \  \:\ \:\    \  \:\  /:/   \  \:\  /:/   \  \:\ \:\     //
//     \  \:\/:/     \  \:\/:/     \  \:\/:/     \  \:\/:/     //
//      \  \::/       \  \::/       \  \::/       \  \::/      //
//       \__\/         \__\/         \__\/         \__\/       //
//                                                             //
//   ( G ) ( O ) ( O ) ( G ) ( i ) ( E ) ( @ ) stanford .edu   //
//                                                             //
// //////////////////////////////////////////////////////////  //
//                                                             //
// ofApp.cpp                                                   //
//                                                             //
// Description:                                                //
//                                                             //
// This is where most of the sexy action takes place.  ofApp   //
// is a child of top level main.cpp, above which nothing else  //
// exists.  Therefore, ofApp serves as our main wrapper for    //
// all of the toneRows, toneButtons and sound generators.      //
//                                                             //
//                                            Created 11/16/16 //
// /////////////////////////////////////////////////////////// //

#include "ofApp.h"

//---------------------------------------------------------------
void ofApp::setup(){
    
    // General setup:
    ofSetCircleResolution(50);
    ofBackground(2,11,20); // Deep Blue
    ofSetWindowTitle("Sapphire");
    ofSetFrameRate(100); // 100fps.
    currentBeat = 1;
    playButton.isEngaged = false;
    tempo = 200;
    minTempo = 2000;
    maxTempo = 10;
    
    // Load the background image:
    sapphireBG.load("images/sapphireShape.jpg");
    
    // Setup play button:
    playButton.setup();
    
    // Setup test tone rows:
    toneRow1.setup();
    toneRow2.setup();
    toneRow3.setup();
    toneRow4.setup();
    toneRow5.setup();
    toneRow6.setup();
    toneRow7.setup();
    toneRow8.setup();
    toneRow9.setup();
    toneRow10.setup();
    toneRow11.setup();
    toneRow12.setup();
    toneRow13.setup();
    toneRow14.setup();
    toneRow15.setup();
    toneRow16.setup();
    
}

//---------------------------------------------------------------
void ofApp::update(){
    
    // Window dimensions:
    int windowWidth = ofGetWidth();
    int windowHeight = ofGetHeight();
    int radius = sapphireBG.getHeight()/2 - 20;
    
    // Update tone rows:
    toneRow1.update(windowWidth/2, windowHeight/2, ((double)(PI)/16), radius);
    toneRow2.update(windowWidth/2, windowHeight/2, ((double)(3*(PI)/16)), radius);
    toneRow3.update(windowWidth/2, windowHeight/2, ((double)(5*(PI)/16)), radius);
    toneRow4.update(windowWidth/2, windowHeight/2, ((double)(7*(PI)/16)), radius);
    toneRow5.update(windowWidth/2, windowHeight/2, ((double)(9*(PI)/16)), radius);
    toneRow6.update(windowWidth/2, windowHeight/2, ((double)(11*(PI)/16)), radius);
    toneRow7.update(windowWidth/2, windowHeight/2, ((double)(13*(PI)/16)), radius);
    toneRow8.update(windowWidth/2, windowHeight/2, ((double)(15*(PI)/16)), radius);
    toneRow9.update(windowWidth/2, windowHeight/2, ((double)(17*PI)/16), radius);
    toneRow10.update(windowWidth/2, windowHeight/2, ((double)(19*(PI)/16)), radius);
    toneRow11.update(windowWidth/2, windowHeight/2, ((double)(21*(PI)/16)), radius);
    toneRow12.update(windowWidth/2, windowHeight/2, ((double)(23*(PI)/16)), radius);
    toneRow13.update(windowWidth/2, windowHeight/2, ((double)(25*(PI)/16)), radius);
    toneRow14.update(windowWidth/2, windowHeight/2, ((double)(27*(PI)/16)), radius);
    toneRow15.update(windowWidth/2, windowHeight/2, ((double)(29*(PI)/16)), radius);
    toneRow16.update(windowWidth/2, windowHeight/2, ((double)(31*(PI)/16)), radius);
    
    
    
    // TEST:
    if(playButton.isEngaged){
        elapsedTime = ofGetElapsedTimeMillis();
        if(elapsedTime > tempo) {
            playNextBeat();
            ofResetElapsedTimeCounter();
        }
    }
}

// Plays one tick:
void ofApp::playNextBeat() {
    
    if(currentBeat == 1){
        toneRow1.play();
        toneRow16.wait();
        currentBeat += 1;
    }
    else if(currentBeat == 2){
        toneRow2.play();
        toneRow1.wait();
        currentBeat += 1;
    }
    else if(currentBeat == 3){
        toneRow3.play();
        toneRow2.wait();
        currentBeat += 1;
    }
    else if(currentBeat == 4){
        toneRow4.play();
        toneRow3.wait();
        currentBeat += 1;
    }
    else if(currentBeat == 5){
        toneRow5.play();
        toneRow4.wait();
        currentBeat += 1;
    }
    else if(currentBeat == 6){
        toneRow6.play();
        toneRow5.wait();
        currentBeat += 1;
    }
    else if(currentBeat == 7){
        toneRow7.play();
        toneRow6.wait();
        currentBeat += 1;
    }
    else if(currentBeat == 8){
        toneRow8.play();
        toneRow7.wait();
        currentBeat += 1;
    }
    else if(currentBeat == 9){
        toneRow9.play();
        toneRow8.wait();
        currentBeat += 1;
    }
    else if(currentBeat == 10){
        toneRow10.play();
        toneRow9.wait();
        currentBeat += 1;
    }
    else if(currentBeat == 11){
        toneRow11.play();
        toneRow10.wait();
        currentBeat += 1;
    }
    else if(currentBeat == 12){
        toneRow12.play();
        toneRow11.wait();
        currentBeat += 1;
    }
    else if(currentBeat == 13){
        toneRow13.play();
        toneRow12.wait();
        currentBeat += 1;
    }
    else if(currentBeat == 14){
        toneRow14.play();
        toneRow13.wait();
        currentBeat += 1;
    }
    else if(currentBeat == 15){
        toneRow15.play();
        toneRow14.wait();
        currentBeat += 1;
    }
    else if(currentBeat == 16){
        toneRow16.play();
        toneRow15.wait();
        currentBeat = 1;
    }
}




//---------------------------------------------------------------
void ofApp::draw(){
    
    // Main window dimensions:
    int windowWidth = ofGetWidth();
    int windowHeight = ofGetHeight();
    
    // Draw the background image:
    int sapphireBGWidth = sapphireBG.getWidth();
    sapphireBG.resize(windowHeight, windowHeight);
    sapphireBG.draw(windowWidth/2 - sapphireBGWidth/2, 0);
    
    // Play Button:
    playButton.draw(windowWidth, windowHeight);
    
    // Test tone row:
    toneRow1.draw();
    toneRow2.draw();
    toneRow3.draw();
    toneRow4.draw();
    toneRow5.draw();
    toneRow6.draw();
    toneRow7.draw();
    toneRow8.draw();
    toneRow9.draw();
    toneRow10.draw();
    toneRow11.draw();
    toneRow12.draw();
    toneRow13.draw();
    toneRow14.draw();
    toneRow15.draw();
    toneRow16.draw();
    
}

//---------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    // Toggle pause with 'space bar':
    if (key == 32){
        playButton.isEngaged = !playButton.isEngaged;
    }
    // Alter tempo with arrow keys:
    if (key == OF_KEY_UP && tempo > maxTempo){
        tempo += -10;
    }
    if (key == OF_KEY_DOWN && tempo < minTempo){
        tempo += 10;
    }
}

//---------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//---------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//---------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//---------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    // Toggle the play button:
    if(playButton.isWithin(x,y)) {
        playButton.update();
    }
    
    // Toggle the first row buttons:
    if(toneRow1.button1.isWithin(x,y)) {
        toneRow1.button1.switchMode();
    }
    if(toneRow1.button2.isWithin(x,y)) {
        toneRow1.button2.switchMode();
    }
    if(toneRow1.button3.isWithin(x,y)) {
        toneRow1.button3.switchMode();
    }
    if(toneRow1.button4.isWithin(x,y)) {
        toneRow1.button4.switchMode();
    }
    if(toneRow1.button5.isWithin(x,y)) {
        toneRow1.button5.switchMode();
    }
    if(toneRow1.button6.isWithin(x,y)) {
        toneRow1.button6.switchMode();
    }
    if(toneRow1.button7.isWithin(x,y)) {
        toneRow1.button7.switchMode();
    }
    if(toneRow1.button8.isWithin(x,y)) {
        toneRow1.button8.switchMode();
    }
    
    // Toggle the second row buttons:
    if(toneRow2.button1.isWithin(x,y)) {
        toneRow2.button1.switchMode();
    }
    if(toneRow2.button2.isWithin(x,y)) {
        toneRow2.button2.switchMode();
    }
    if(toneRow2.button3.isWithin(x,y)) {
        toneRow2.button3.switchMode();
    }
    if(toneRow2.button4.isWithin(x,y)) {
        toneRow2.button4.switchMode();
    }
    if(toneRow2.button5.isWithin(x,y)) {
        toneRow2.button5.switchMode();
    }
    if(toneRow2.button6.isWithin(x,y)) {
        toneRow2.button6.switchMode();
    }
    if(toneRow2.button7.isWithin(x,y)) {
        toneRow2.button7.switchMode();
    }
    if(toneRow2.button8.isWithin(x,y)) {
        toneRow2.button8.switchMode();
    }
    
    // Toggle the third row buttons:
    if(toneRow3.button1.isWithin(x,y)) {
        toneRow3.button1.switchMode();
    }
    if(toneRow3.button2.isWithin(x,y)) {
        toneRow3.button2.switchMode();
    }
    if(toneRow3.button3.isWithin(x,y)) {
        toneRow3.button3.switchMode();
    }
    if(toneRow3.button4.isWithin(x,y)) {
        toneRow3.button4.switchMode();
    }
    if(toneRow3.button5.isWithin(x,y)) {
        toneRow3.button5.switchMode();
    }
    if(toneRow3.button6.isWithin(x,y)) {
        toneRow3.button6.switchMode();
    }
    if(toneRow3.button7.isWithin(x,y)) {
        toneRow3.button7.switchMode();
    }
    if(toneRow3.button8.isWithin(x,y)) {
        toneRow3.button8.switchMode();
    }
    
    // Toggle the fourth row buttons:
    if(toneRow4.button1.isWithin(x,y)) {
        toneRow4.button1.switchMode();
    }
    if(toneRow4.button2.isWithin(x,y)) {
        toneRow4.button2.switchMode();
    }
    if(toneRow4.button3.isWithin(x,y)) {
        toneRow4.button3.switchMode();
    }
    if(toneRow4.button4.isWithin(x,y)) {
        toneRow4.button4.switchMode();
    }
    if(toneRow4.button5.isWithin(x,y)) {
        toneRow4.button5.switchMode();
    }
    if(toneRow4.button6.isWithin(x,y)) {
        toneRow4.button6.switchMode();
    }
    if(toneRow4.button7.isWithin(x,y)) {
        toneRow4.button7.switchMode();
    }
    if(toneRow4.button8.isWithin(x,y)) {
        toneRow4.button8.switchMode();
    }
    
    // Toggle the fifth row buttons:
    if(toneRow5.button1.isWithin(x,y)) {
        toneRow5.button1.switchMode();
    }
    if(toneRow5.button2.isWithin(x,y)) {
        toneRow5.button2.switchMode();
    }
    if(toneRow5.button3.isWithin(x,y)) {
        toneRow5.button3.switchMode();
    }
    if(toneRow5.button4.isWithin(x,y)) {
        toneRow5.button4.switchMode();
    }
    if(toneRow5.button5.isWithin(x,y)) {
        toneRow5.button5.switchMode();
    }
    if(toneRow5.button6.isWithin(x,y)) {
        toneRow5.button6.switchMode();
    }
    if(toneRow5.button7.isWithin(x,y)) {
        toneRow5.button7.switchMode();
    }
    if(toneRow5.button8.isWithin(x,y)) {
        toneRow5.button8.switchMode();
    }
    
    // Toggle the sixth row buttons:
    if(toneRow6.button1.isWithin(x,y)) {
        toneRow6.button1.switchMode();
    }
    if(toneRow6.button2.isWithin(x,y)) {
        toneRow6.button2.switchMode();
    }
    if(toneRow6.button3.isWithin(x,y)) {
        toneRow6.button3.switchMode();
    }
    if(toneRow6.button4.isWithin(x,y)) {
        toneRow6.button4.switchMode();
    }
    if(toneRow6.button5.isWithin(x,y)) {
        toneRow6.button5.switchMode();
    }
    if(toneRow6.button6.isWithin(x,y)) {
        toneRow6.button6.switchMode();
    }
    if(toneRow6.button7.isWithin(x,y)) {
        toneRow6.button7.switchMode();
    }
    if(toneRow6.button8.isWithin(x,y)) {
        toneRow6.button8.switchMode();
    }
    
    // Toggle the seventh row buttons:
    if(toneRow7.button1.isWithin(x,y)) {
        toneRow7.button1.switchMode();
    }
    if(toneRow7.button2.isWithin(x,y)) {
        toneRow7.button2.switchMode();
    }
    if(toneRow7.button3.isWithin(x,y)) {
        toneRow7.button3.switchMode();
    }
    if(toneRow7.button4.isWithin(x,y)) {
        toneRow7.button4.switchMode();
    }
    if(toneRow7.button5.isWithin(x,y)) {
        toneRow7.button5.switchMode();
    }
    if(toneRow7.button6.isWithin(x,y)) {
        toneRow7.button6.switchMode();
    }
    if(toneRow7.button7.isWithin(x,y)) {
        toneRow7.button7.switchMode();
    }
    if(toneRow7.button8.isWithin(x,y)) {
        toneRow7.button8.switchMode();
    }
    
    // Toggle the eigth row buttons:
    if(toneRow8.button1.isWithin(x,y)) {
        toneRow8.button1.switchMode();
    }
    if(toneRow8.button2.isWithin(x,y)) {
        toneRow8.button2.switchMode();
    }
    if(toneRow8.button3.isWithin(x,y)) {
        toneRow8.button3.switchMode();
    }
    if(toneRow8.button4.isWithin(x,y)) {
        toneRow8.button4.switchMode();
    }
    if(toneRow8.button5.isWithin(x,y)) {
        toneRow8.button5.switchMode();
    }
    if(toneRow8.button6.isWithin(x,y)) {
        toneRow8.button6.switchMode();
    }
    if(toneRow8.button7.isWithin(x,y)) {
        toneRow8.button7.switchMode();
    }
    if(toneRow8.button8.isWithin(x,y)) {
        toneRow8.button8.switchMode();
    }
    
    // Toggle the nineth row buttons:
    if(toneRow9.button1.isWithin(x,y)) {
        toneRow9.button1.switchMode();
    }
    if(toneRow9.button2.isWithin(x,y)) {
        toneRow9.button2.switchMode();
    }
    if(toneRow9.button3.isWithin(x,y)) {
        toneRow9.button3.switchMode();
    }
    if(toneRow9.button4.isWithin(x,y)) {
        toneRow9.button4.switchMode();
    }
    if(toneRow9.button5.isWithin(x,y)) {
        toneRow9.button5.switchMode();
    }
    if(toneRow9.button6.isWithin(x,y)) {
        toneRow9.button6.switchMode();
    }
    if(toneRow9.button7.isWithin(x,y)) {
        toneRow9.button7.switchMode();
    }
    if(toneRow9.button8.isWithin(x,y)) {
        toneRow9.button8.switchMode();
    }
    
    // Toggle the tenth row buttons:
    if(toneRow10.button1.isWithin(x,y)) {
        toneRow10.button1.switchMode();
    }
    if(toneRow10.button2.isWithin(x,y)) {
        toneRow10.button2.switchMode();
    }
    if(toneRow10.button3.isWithin(x,y)) {
        toneRow10.button3.switchMode();
    }
    if(toneRow10.button4.isWithin(x,y)) {
        toneRow10.button4.switchMode();
    }
    if(toneRow10.button5.isWithin(x,y)) {
        toneRow10.button5.switchMode();
    }
    if(toneRow10.button6.isWithin(x,y)) {
        toneRow10.button6.switchMode();
    }
    if(toneRow10.button7.isWithin(x,y)) {
        toneRow10.button7.switchMode();
    }
    if(toneRow10.button8.isWithin(x,y)) {
        toneRow10.button8.switchMode();
    }
    
    // Toggle the eleventh row buttons:
    if(toneRow11.button1.isWithin(x,y)) {
        toneRow11.button1.switchMode();
    }
    if(toneRow11.button2.isWithin(x,y)) {
        toneRow11.button2.switchMode();
    }
    if(toneRow11.button3.isWithin(x,y)) {
        toneRow11.button3.switchMode();
    }
    if(toneRow11.button4.isWithin(x,y)) {
        toneRow11.button4.switchMode();
    }
    if(toneRow11.button5.isWithin(x,y)) {
        toneRow11.button5.switchMode();
    }
    if(toneRow11.button6.isWithin(x,y)) {
        toneRow11.button6.switchMode();
    }
    if(toneRow11.button7.isWithin(x,y)) {
        toneRow11.button7.switchMode();
    }
    if(toneRow11.button8.isWithin(x,y)) {
        toneRow11.button8.switchMode();
    }
    
    // Toggle the twelveth row buttons:
    if(toneRow12.button1.isWithin(x,y)) {
        toneRow12.button1.switchMode();
    }
    if(toneRow12.button2.isWithin(x,y)) {
        toneRow12.button2.switchMode();
    }
    if(toneRow12.button3.isWithin(x,y)) {
        toneRow12.button3.switchMode();
    }
    if(toneRow12.button4.isWithin(x,y)) {
        toneRow12.button4.switchMode();
    }
    if(toneRow12.button5.isWithin(x,y)) {
        toneRow12.button5.switchMode();
    }
    if(toneRow12.button6.isWithin(x,y)) {
        toneRow12.button6.switchMode();
    }
    if(toneRow12.button7.isWithin(x,y)) {
        toneRow12.button7.switchMode();
    }
    if(toneRow12.button8.isWithin(x,y)) {
        toneRow12.button8.switchMode();
    }
    
    // Toggle the thirteenth row buttons:
    if(toneRow13.button1.isWithin(x,y)) {
        toneRow13.button1.switchMode();
    }
    if(toneRow13.button2.isWithin(x,y)) {
        toneRow13.button2.switchMode();
    }
    if(toneRow13.button3.isWithin(x,y)) {
        toneRow13.button3.switchMode();
    }
    if(toneRow13.button4.isWithin(x,y)) {
        toneRow13.button4.switchMode();
    }
    if(toneRow13.button5.isWithin(x,y)) {
        toneRow13.button5.switchMode();
    }
    if(toneRow13.button6.isWithin(x,y)) {
        toneRow13.button6.switchMode();
    }
    if(toneRow13.button7.isWithin(x,y)) {
        toneRow13.button7.switchMode();
    }
    if(toneRow13.button8.isWithin(x,y)) {
        toneRow13.button8.switchMode();
    }
    
    // Toggle the fourteenth row buttons:
    if(toneRow14.button1.isWithin(x,y)) {
        toneRow14.button1.switchMode();
    }
    if(toneRow14.button2.isWithin(x,y)) {
        toneRow14.button2.switchMode();
    }
    if(toneRow14.button3.isWithin(x,y)) {
        toneRow14.button3.switchMode();
    }
    if(toneRow14.button4.isWithin(x,y)) {
        toneRow14.button4.switchMode();
    }
    if(toneRow14.button5.isWithin(x,y)) {
        toneRow14.button5.switchMode();
    }
    if(toneRow14.button6.isWithin(x,y)) {
        toneRow14.button6.switchMode();
    }
    if(toneRow14.button7.isWithin(x,y)) {
        toneRow14.button7.switchMode();
    }
    if(toneRow14.button8.isWithin(x,y)) {
        toneRow14.button8.switchMode();
    }
    
    // Toggle the fifteenth row buttons:
    if(toneRow15.button1.isWithin(x,y)) {
        toneRow15.button1.switchMode();
    }
    if(toneRow15.button2.isWithin(x,y)) {
        toneRow15.button2.switchMode();
    }
    if(toneRow15.button3.isWithin(x,y)) {
        toneRow15.button3.switchMode();
    }
    if(toneRow15.button4.isWithin(x,y)) {
        toneRow15.button4.switchMode();
    }
    if(toneRow15.button5.isWithin(x,y)) {
        toneRow15.button5.switchMode();
    }
    if(toneRow15.button6.isWithin(x,y)) {
        toneRow15.button6.switchMode();
    }
    if(toneRow15.button7.isWithin(x,y)) {
        toneRow15.button7.switchMode();
    }
    if(toneRow15.button8.isWithin(x,y)) {
        toneRow15.button8.switchMode();
    }
    
    // Toggle the sixteenth row buttons:
    if(toneRow16.button1.isWithin(x,y)) {
        toneRow16.button1.switchMode();
    }
    if(toneRow16.button2.isWithin(x,y)) {
        toneRow16.button2.switchMode();
    }
    if(toneRow16.button3.isWithin(x,y)) {
        toneRow16.button3.switchMode();
    }
    if(toneRow16.button4.isWithin(x,y)) {
        toneRow16.button4.switchMode();
    }
    if(toneRow16.button5.isWithin(x,y)) {
        toneRow16.button5.switchMode();
    }
    if(toneRow16.button6.isWithin(x,y)) {
        toneRow16.button6.switchMode();
    }
    if(toneRow16.button7.isWithin(x,y)) {
        toneRow16.button7.switchMode();
    }
    if(toneRow16.button8.isWithin(x,y)) {
        toneRow16.button8.switchMode();
    }
    
}

//---------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//---------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//---------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//---------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//---------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//---------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
