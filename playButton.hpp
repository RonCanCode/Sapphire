
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
// playButton.hpp                                              //
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

#ifndef playButton_hpp
#define playButton_hpp

#include <stdio.h>
#include "ofMain.h"

class playButton {
    
public:
    
    // Constructor:
    playButton();
    
    // Functions:
    void setup();
    void update();
    void draw(int windowWidth, int windowHeight);
    bool isWithin(int _x, int _y);
    
    // Variables:
    int x;
    int y;
    int buttonSize;
    bool isEngaged;
    
    // Images:
    ofImage playButtonDark;
    ofImage playButtonLight;
    
private:
    
    
};

#endif /* playButton_hpp */
