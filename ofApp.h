
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
// ofApp.h                                                     //
//                                                             //
// Description:                                                //
//                                                             //
// This is where most of the sexy action takes place.  ofApp   //
// is a child of top level main.cpp, above which nothing else  //
// exists.  Therefore, ofApp serves as our main wrapper for    //
// all of the buttons and sound generators.                    //
//                                                             //
//                                            Created 11/16/16 //
// /////////////////////////////////////////////////////////// //

#pragma once

#include "ofMain.h"
#include "playButton.hpp"
#include "toneRow.hpp"
#include "toneButton.hpp"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void playNextBeat();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    // Images:
    ofImage sapphireBG;
    
    // Play button:
    playButton playButton;
    
    // Test tone row:
    toneRow toneRow1;
    toneRow toneRow2;
    toneRow toneRow3;
    toneRow toneRow4;
    toneRow toneRow5;
    toneRow toneRow6;
    toneRow toneRow7;
    toneRow toneRow8;
    toneRow toneRow9;
    toneRow toneRow10;
    toneRow toneRow11;
    toneRow toneRow12;
    toneRow toneRow13;
    toneRow toneRow14;
    toneRow toneRow15;
    toneRow toneRow16;
    
private:
    
    int elapsedTime;
    int tempo;
    int currentBeat;
    int maxTempo;
    int minTempo;
    

};
