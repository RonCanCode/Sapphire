
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
// toneRow.hpp                                                 //
//                                                             //
// Description:                                                //
//                                                             //
// A toneRow contains eight toneButtons.  It is specified by   //
// an (x,y) cordinate, an angle, and a length.  The (x,y)      //
// cordinate should match the center of our Sapphire unit.     //
// The angle determines which clock-tick we are looking at.    //
// And the length is determined by the Sapphire radius.        //
//                                                             //
//                                            Created 11/21/16 //
// /////////////////////////////////////////////////////////// //

#ifndef toneRow_hpp
#define toneRow_hpp

#include <stdio.h>
#include "toneButton.hpp"
#include "ofMain.h"


class toneRow {
    
public:
    
    // Constructor:
    toneRow();
    
    // Functions:
    void setup();
    void update(int _x, int _y, double theta, int radius);
    void play();
    void wait();
    void draw();
    
    // Tone Buttons
    toneButton button1;
    toneButton button2;
    toneButton button3;
    toneButton button4;
    toneButton button5;
    toneButton button6;
    toneButton button7;
    toneButton button8;
    
    // Audio Files:
    string audioFile1;
    string audioFile2;
    string audioFile3;
    string audioFile4;
    string audioFile5;
    string audioFile6;
    string audioFile7;
    string audioFile8;
    
private:
    
    // Dimensions:
    int length;
    int oneStep;
    double cosTheta;
    double sinTheta;
    int x;
    int y;

};

#endif /* toneRow_hpp */
