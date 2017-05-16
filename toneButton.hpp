
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
// toneButton.hpp                                              //
//                                                             //
// Description:                                                //
//                                                             //
// A toneButton represents a single LED on our sequencer.      //
// It is specified by a frequency, and a location, and is      //
// either playing, engaged/waiting or muted.                   //
//                                                             //
//                                            Created 11/21/16 //
// /////////////////////////////////////////////////////////// //

#ifndef toneButton_hpp
#define toneButton_hpp

#include <stdio.h>
#include "ofMain.h"

class toneButton {
    
public:
    
    // Constructor:
    toneButton();
    
    // Functions:
    void setup(string wavFile);
    void update(int _x, int _y, float _freq);
    void play();
    void wait();
    void draw();
    void switchMode(); // toggle button
    bool isWithin(int _x, int _y);
    
private:
    
    bool engaged; // ready to play
    bool active;  // row is lit up
    float freq;
    int x;
    int y;
    int buttonSize;
    
    // Images:
    ofImage buttonDark;
    ofImage buttonMed;
    ofImage buttonLight;
    ofImage buttonActive;
    
    // Sounds:
    ofSoundPlayer  tone;
    
};

#endif /* toneButton_hpp */
