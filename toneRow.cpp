
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
// toneRow.cpp                                                 //
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

#include "toneRow.hpp"

toneRow::toneRow() {
    
}

void toneRow::setup(){
    
    audioFile8 = "audio/c1.wav";
    audioFile7 = "audio/d1.wav";
    audioFile6 = "audio/e1.wav";
    audioFile5 = "audio/f1.wav";
    audioFile4 = "audio/g1.wav";
    audioFile3 = "audio/a1.wav";
    audioFile2 = "audio/b1.wav";
    audioFile1 = "audio/c2.wav";
    
    button1.setup(audioFile1);
    button2.setup(audioFile2);
    button3.setup(audioFile3);
    button4.setup(audioFile4);
    button5.setup(audioFile5);
    button6.setup(audioFile6);
    button7.setup(audioFile7);
    button8.setup(audioFile8);
    
}

// Calculates button locations for one row:
void toneRow::update(int _x, int _y, double theta, int radius){
    // Initialize variables:
    length = radius;
    oneStep = radius/10;
    cosTheta = cos(theta);
    sinTheta = sin(theta);
    x = _x;
    y = _y;
    
    // Specify tone buttons locations:
    int x1 = (int)(x - (cosTheta*2*oneStep));
    int y1 = (int)(y - (sinTheta*2*oneStep));
    button1.update(x1,y1,440);
    int x2 = (int)(x - (cosTheta*3*oneStep));
    int y2 = (int)(y - (sinTheta*3*oneStep));
    button2.update(x2,y2,440);
    int x3 = (int)(x - (cosTheta*4*oneStep));
    int y3 = (int)(y - (sinTheta*4*oneStep));
    button3.update(x3,y3,440);
    int x4 = (int)(x - (cosTheta*5*oneStep));
    int y4 = (int)(y - (sinTheta*5*oneStep));
    button4.update(x4,y4,440);
    int x5 = (int)(x - (cosTheta*6*oneStep));
    int y5 = (int)(y - (sinTheta*6*oneStep));
    button5.update(x5,y5,440);
    int x6 = (int)(x - (cosTheta*7*oneStep));
    int y6 = (int)(y - (sinTheta*7*oneStep));
    button6.update(x6,y6,440);
    int x7 = (int)(x - (cosTheta*8*oneStep));
    int y7 = (int)(y - (sinTheta*8*oneStep));
    button7.update(x7,y7,440);
    int x8 = (int)(x - (cosTheta*9*oneStep));
    int y8 = (int)(y - (sinTheta*9*oneStep));
    button8.update(x8,y8,440);
}

// Renders buttons:
void toneRow::draw() {
    button1.draw();
    button2.draw();
    button3.draw();
    button4.draw();
    button5.draw();
    button6.draw();
    button7.draw();
    button8.draw();
}

// Called when row is active:
void toneRow::play() {
    button1.play();
    button2.play();
    button3.play();
    button4.play();
    button5.play();
    button6.play();
    button7.play();
    button8.play();
}

// Called when row is done:
void toneRow::wait() {
    button1.wait();
    button2.wait();
    button3.wait();
    button4.wait();
    button5.wait();
    button6.wait();
    button7.wait();
    button8.wait();
}
