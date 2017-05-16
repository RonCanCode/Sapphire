
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
// playButton.cpp                                              //
//                                                             //
// Description:                                                //
//                                                             //
// The Playbutton class is responsible for generating a button //
// image, and is a child of the ofApp class.  The button       //
// internally stores its toggle state (isEngaged).  There is   //
// also an (isWithin) function which returns true if an (x,y)  //
// cordinate is within the button.                             //
//                                                             //
//                                            Created 11/20/16 //
// /////////////////////////////////////////////////////////// //

#include "playButton.hpp"

// Constructor:
playButton::playButton() {
    isEngaged = false;
    buttonSize = 100;
}

// Does what is says:
void playButton::setup(){

    // Load the play button image:
    playButtonDark.load("images/playButtonDark.png");
    playButtonLight.load("images/playButtonLight.png");
    
}

// Toggles the button on/off:
void playButton::update(){
    isEngaged = !isEngaged;
}

// Draws the play button:
void playButton::draw(int windowWidth, int windowHeight) {
    // Play Button:
    playButtonDark.resize(buttonSize,buttonSize);
    playButtonLight.resize(buttonSize,buttonSize);
    int button_x = windowWidth/2 - buttonSize/2;
    int button_y = windowHeight/2 - buttonSize/2;
    x = button_x;
    y = button_y;
    
    if (isEngaged){
        playButtonLight.draw(button_x, button_y);
    }
    else if (!isEngaged){
        playButtonDark.draw(button_x, button_y);
    }
    
}

// Checks if a click(x,y) is on the button:
bool playButton::isWithin(int _x, int _y){
    // "Fixes" clicks outside boundaries:
    int pad = buttonSize/10;
    if (_x > x + pad && _x < x + buttonSize - pad
        && _y > y + pad && _y < y + buttonSize - pad){
        return true;
    }
    else return false;
}
