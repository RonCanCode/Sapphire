
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
// toneButton.cpp                                              //
//                                                             //
// Description:                                                //
//                                                             //
// A toneButton represents a single LED on our sequencer.      //
// It is specified by a frequency, and is either playing,      //
// engaged/waiting, or muted.                                  //
//                                                             //
//                                            Created 11/21/16 //
// /////////////////////////////////////////////////////////// //

#include "toneButton.hpp"

// Constructor:
toneButton::toneButton() {
}

// Loads the images:
void toneButton::setup(string waveFile){
    
    // Load the button image:
    buttonDark.load("images/buttonDark.png");
    buttonMed.load("images/buttonMed.png");
    buttonLight.load("images/buttonLight.png");
    buttonActive.load("images/buttonActive.png");
    
    // Initialize Vars:
    engaged = false;
    active = false;
    buttonSize = 50;
    
    // Load audio:
    tone.load(waveFile);
    tone.setVolume(0.75f);
    tone.setMultiPlay(true);
    
}

// Sets the position and frequency:
void toneButton::update(int _x, int _y, float _freq){
    
    // Initialize variables:
    freq = _freq;
    x = _x - buttonSize/2;
    y = _y - buttonSize/2;
    
    // Update the sound playing system:
    ofSoundUpdate();
}

// Toggles button status:
void toneButton::switchMode(){
    engaged = !engaged;
    
    
}

// Renders the image:
void toneButton::draw() {
    
    // Resize buttons:
    buttonDark.resize(buttonSize,buttonSize);
    buttonLight.resize(buttonSize,buttonSize);
    buttonMed.resize(buttonSize,buttonSize);
    buttonActive.resize(buttonSize,buttonSize);
    
    // Check status:
    if (!engaged && !active) {
        buttonDark.draw(x,y);
    }
    else if(engaged && !active) {
        buttonMed.draw(x,y);
    }
    else if (!engaged && active){
        buttonActive.draw(x, y);
    }
    else if (engaged && active) {
        buttonLight.draw(x,y);
    }
}

// Gets called when the row is highlighted:
void toneButton::play() {
    // Switch modes:
    active = true;
    
    // Play the sound:
    if(engaged){
        tone.play();
    }
}

// Gets called after the row is done playing:
void toneButton::wait() {
    // Switch modes:
    active = false;
}

bool toneButton::isWithin(int _x, int _y) {
    
    // "Fixes" overlap issues in smallest ring:
    int pad = buttonSize/4;
    
    if (_x > x + pad && _x < x + buttonSize - pad
        && _y > y + pad && _y < y + buttonSize - pad){
        return true;
    }
    else return false;
}
