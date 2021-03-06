#ifndef KTANE_GLOBAL_H
#define KTANE_GLOBAL_H

#include <Arduino.h>

static const int Seed = 3247;

namespace KTANE {
  
  // The current cycle
  static int tick = 0;

  // If the players have won yet
  static bool hasWon = false;

  // The length of the left RGB loop
  static const int leftRGBLoopLength = rand()%4+4;

  // The length of the right RGB loop
  static const int rightRGBLoopLength = rand()%4+4;

  // The colourIDs for the left RGB loop
  static int leftRGBLoop[7] = {-1};

  // The RGB colour values used for the left RGB loop
  static int leftRGBLoopColours[7][3];

  // The colourIDs for the right RGB loop
  static int rightRGBLoop[7] = {-1};

  // The RGB colour values used for the right RGB loop
  static int rightRGBLoopColours[7][3];

  // The length of the servo sequence
  static const int servoLoopLength = rand()%7+3;

  // The positions for the servo sequence
  static int servoLoop[9] = {-1};

  // The starting position for the servo sequence
  static int servoLoopStart;

  #define LEDCount 24

  // The colourIDs for the NeoPixel ring
  static int ringRGB[LEDCount];

  // The RGB colour values used for the NeoPixel ring
  static int ringRGBColours[LEDCount][3];

  // The current position of the player in the maze (x, y)
  static int currentMazePosition[2];

  // The final value
  static int finalModifiedValue;

  // Array of colours used
  static const int colours[7][3] = {
    {255, 0, 0},     // Red
    {0, 255, 0},     // Green
    {0, 0, 255},     // Blue
    {0, 255, 255},   // Cyan
    {166, 0, 255},   // Purple
    {225, 255, 255}, // White
    {0, 0, 0}        // Off
  };

  // Declare functions
  void fillRGBLoops();
  void fillRingRGB();
  void calcServoLoopStart();
  void fillServoLoop();
  int determineInitialValue();
  bool horizontalLines(int, int);
  bool verticalLines(int, int);
  bool squareGrid(int, int);
  bool diagonalLines(int, int);
  bool concentricCircles(int, int);
  bool squareWaves(int, int);
  bool concentricSquares(int, int);
  bool checkerboard(int, int);
  void updateRGBLEDs();

  // Define locations of in/out pins
  #define NeoPixelPin 1
  #define OLEDClockPin 2
  #define OLEDDataPin 3
  #define ServoPin 4
  #define LeftRGBLEDRedPin 5
  #define LeftRGBLEDGreenPin 6
  #define LeftRGBLEDBluePin 7
  #define RightRGBLEDRedPin 8
  #define RightRGBLEDGreenPin 9
  #define RightRGBLEDBluePin 10
  #define ButtonUpPin 11
  #define ButtonDownPin 12
  #define ButtonLeftPin 13
  #define ButtonRightPin 14
  #define Timer1Pin 15
  #define Timer2Pin 16
  #define Timer3Pin 17
  #define PotentiometerPin 18
}

#endif