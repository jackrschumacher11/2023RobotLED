// ArrayOfLedArrays - see https://github.com/FastLED/FastLED/wiki/Multiple-Controller-Examples for more info on
// using multiple controllers.  In this example, we're going to set up three NEOPIXEL strips on three
// different pins, each strip getting its own CRGB array to be played with, only this time they're going
// to be all parts of an array of arrays.
// Import library
#include <FastLED.h>

#define NUM_STRIPS 4
#define NUM_LEDS_PER_STRIP 81
CRGB leds[NUM_STRIPS][NUM_LEDS_PER_STRIP];
// CRGB blueStrip[NUM_LEDS_PER_STRIP];
// CRGB whiteStrip[NUM_LEDS_PER_STRIP];



// For mirroring strips, all the "special" stuff happens just in setup.  We
// just addLeds multiple times, once for each strip
void setup() {
  FastLED.setBrightness(50);
  // tell FastLED there's 81 NEOPIXEL leds on pin 12
  FastLED.addLeds<NEOPIXEL, 12>(leds[0], NUM_LEDS_PER_STRIP);
  // for(int i =0; i < NUM_LEDS_PER_STRIP; i++){
  //   blueStrip[i] = CRGB(7,30,74);
  //   whiteStrip[i] = CRGB(255,255,255);
    
    
  // }
  
}

void setBluePatternForwards()
  {
    for(int i = 0; i < NUM_LEDS_PER_STRIP; i++) {
            // Does take RGB
            leds[0][i] = CRGB(0,0,255);
            delay(25);
            FastLED.show();
        }
  }
void setWhitePatternForward()
  {
    for(int i = 0; i < NUM_LEDS_PER_STRIP; i++) {
            // Does take RGB
            leds[0][i] = CRGB(255,255,255);
            delay(25);
            FastLED.show();
        }
  }
  void setBluePatternBack()
  {
    for(int i = 81; i >= 0; i--) {
            // Does take RGB
            leds[0][i] = CRGB(0,0,255);
            delay(25);
            FastLED.show();
        }
  }
void setWhitePatternBack()
  {
    for(int i = 81; i >= 0; i--) {
            // Does take RGB
            leds[0][i] = CRGB(255,255,255);
            delay(25);
            FastLED.show();
        }
  }



void loop() {
    
    // This inner loop will go over each led in the current strip, one at a time  
    
    
    setBluePatternForwards();
    FastLED.delay(250);
    setWhitePatternForward();
    FastLED.delay(250);
    setBluePatternBack();
    FastLED.delay(250);
    setWhitePatternBack();

      
  }

