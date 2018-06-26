//flickery af

#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include <FastLED.h>
#include "AudioSample1.h"
#include "AudioSample2.h"
#include "AudioSample3.h"
#include "AudioSample4.h"
#include "AudioSample5.h"
#include "AudioSample6.h"
#include "AudioSample7.h"
#include "AudioSample8.h"
#include "AudioSample9.h"
#include "AudioSample10.h"

// GUItool: begin automatically generated code
AudioPlayMemory          playMem3;       //xy=385.5555419921875,235.2222137451172
AudioPlayMemory          playMem2;       //xy=387.5555419921875,194.2222137451172
AudioPlayMemory          playMem4;       //xy=389.8888931274414,268.33335971832275
AudioPlayMemory          playMem1;       //xy=399.5555419921875,162.2222137451172
AudioPlayMemory          playMem5;       //xy=418.5555419921875,336.2222137451172
AudioPlayMemory          playMem6;       //xy=430.5555419921875,369.2222137451172
AudioPlayMemory          playMem9;       //xy=448.5555419921875,473.2222137451172
AudioPlayMemory          playMem8;       //xy=451.5555419921875,438.2222137451172
AudioPlayMemory          playMem10;      //xy=459.5555419921875,518.2222137451172
AudioPlayMemory          playMem7;       //xy=463.5555419921875,403.2222137451172
AudioMixer4              Mix1;           //xy=639.5555419921875,202.2222137451172
AudioMixer4              Mix2;           //xy=773.6666564941406,332.66669845581055
AudioMixer4              Mix3;           //xy=1083.6667518615723,348.88890647888184
AudioOutputI2S           i2s2;           //xy=1275.1112747192383,345.7778148651123
AudioConnection          patchCord1(playMem3, 0, Mix1, 2);
AudioConnection          patchCord2(playMem2, 0, Mix1, 1);
AudioConnection          patchCord3(playMem4, 0, Mix1, 3);
AudioConnection          patchCord4(playMem1, 0, Mix1, 0);
AudioConnection          patchCord5(playMem5, 0, Mix2, 1);
AudioConnection          patchCord6(playMem6, 0, Mix2, 2);
AudioConnection          patchCord7(playMem9, 0, Mix3, 2);
AudioConnection          patchCord8(playMem8, 0, Mix2, 0);
AudioConnection          patchCord9(playMem10, 0, Mix3, 3);
AudioConnection          patchCord10(playMem7, 0, Mix2, 3);
AudioConnection          patchCord11(Mix1, 0, Mix3, 0);
AudioConnection          patchCord12(Mix2, 0, Mix3, 1);
AudioConnection          patchCord13(Mix3, 0, i2s2, 0);
AudioConnection          patchCord14(Mix3, 0, i2s2, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=891.5555419921875,210.2222137451172
// GUItool: end automatically generated code
#define NUM_LEDS 20
#define DATA_PIN 2
CRGB leds[NUM_LEDS];
int pin1 = 0;
int pin2 = 0;
int pin3 = 0;
int pin4 = 0;
int pin5 = 0;
int pin6 = 0;
int pin7 = 0;
int pin8 = 0;
int pin9 = 0;
int pin10 = 0;
int led = 13;
int i1 = 0;
int i2 = 0;
int i3 = 0;
int i4 = 0;
int i5 = 0;
int i6 = 0;
int i7 = 0;
int i8 = 0;
int i9 = 0;
int i10 = 0;

int threshold = 1000;
// Use these with the Teensy Audio Shield
#define SDCARD_CS_PIN    10
#define SDCARD_MOSI_PIN  7
#define SDCARD_SCK_PIN   14

// Use these with the Teensy 3.5 & 3.6 SD card
//#define SDCARD_CS_PIN    BUILTIN_SDCARD
//#define SDCARD_MOSI_PIN  11  // not actually used
//#define SDCARD_SCK_PIN   13  // not actually used

// Use these for the SD+Wiz820 or other adaptors
//#define SDCARD_CS_PIN    4
//#define SDCARD_MOSI_PIN  11
//#define SDCARD_SCK_PIN   13

void setup() {
  Serial.begin(9600);
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);

  pinMode(led, OUTPUT);
  // Audio connections require memory to work.  For more
  // detailed information, see the MemoryAndCpuUsage example
  AudioMemory(50);

  // Comment these out if not using the audio adaptor board.
  // This may wait forever if the SDA & SCL pins lack
  // pullup resistors
  sgtl5000_1.enable();
  sgtl5000_1.volume(.8);

  Mix1.gain(0, 0.80);
  Mix1.gain(1, 0.80);
  Mix1.gain(2, 0.80);
  Mix1.gain(3, 0.80);
  Mix2.gain(0, 0.80);
  Mix2.gain(1, 0.80);
  Mix2.gain(2, 0.80);
  Mix2.gain(3, 0.80);
  Mix3.gain(0, 0.80);
  Mix3.gain(1, 0.80);
  Mix3.gain(2, 0.80);
  Mix3.gain(3, 0.80);
}

void loop() {
  digitalWrite(led, HIGH);
  pin1 = touchRead(29);
  pin2 = touchRead(0);
  pin3 = touchRead(1);
  //pin4 = touchRead(18);
 // pin5 = touchRead(15);
  pin6 = touchRead(16);
  pin7 = touchRead(17);
  //pin8 = touchRead(19);
  //pin9 = touchRead(22);
  //pin10 = touchRead(23);
  
    Serial.print(" pin1 = "); Serial.print(pin1);
    Serial.print(" pin2 = "); Serial.print(pin2);
    Serial.print(" pin3 = "); Serial.print(pin3);
    Serial.print(" pin4 = "); Serial.print(pin4);
    Serial.print(" pin5 = "); Serial.print(pin5);
    Serial.print(" pin6 = "); Serial.print(pin6);
    Serial.print(" pin7 = "); Serial.print(pin7);
    Serial.print(" pin8 = "); Serial.print(pin8);
    Serial.print(" pin9 = "); Serial.print(pin9);
    Serial.print(" pi10= "); Serial.print(pin10);
  
  /////////// EXPERIMENTAL ZONE
  
    int pins[] = {29, 1, 0, 18, 15, 16, 17, 19, 22, 23};
    int thresholds[] = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    //int playMemss[] = {playMem1, playMem2, playMem3, playMem4, playMem5, playMem6, playMem7, playMem8, playMem9, playMem10};
  //const unsigned int audioSamples[] = {AudioSample1,AudioSample2,AudioSample3,AudioSample4,AudioSample5,AudioSample6,AudioSample7,AudioSample8,AudioSample9,AudioSample10};
    int evens[] = {0,2,4,6,8,10,12,14,16,18};
    int odds[] = {1,3,5,7,9,11,13,15,17,19};
    for (int i = 0; i < 10; i++) {
      
    int  pinVal = touchRead(pins[i]);
      int thresh = thresholds[i];
      int even = evens[i];
      int odd = odds[i];
      
       if( pinVal > thresh ){   
    
          leds[even] = CRGB::Blue;
          leds[odd] = CRGB::Blue;
          FastLED.delay(300);

          // clear this led for the next time around the loop
          //leds[even] = fadeToBlackBy(1000);
          //leds[odd] = fadeToBlackBy(1000);
          leds[even] = CRGB::Black;
          leds[odd] = CRGB::Black;

          FastLED.show();

          }
     }
   /*   if (pinVal > thresh && playMemss[i].isPlaying() == 0) {
        playMems[i].play(audioSamples[i]);
      } else if (pinVal < thresh && playMemss[i].isPlaying() != 0) {
        playMems[i].stop();
        playMems[i].play(audioSamples[i]);
      }
    
    }
    */
  
  ////////////// END EXPERIMENT
/*
  // put your main code here, to run repeatedly:
  if (pin1 > 3000 && i1 == 0) {
    playMem1.play(AudioSample1);
    i1 = 1;
    Serial.print("we're playing #1");
    
    leds[0] = CRGB::LightYellow;
    leds[1] = CRGB::LightYellow;
    FastLED.show();
  }
  else if (pin1 < 3000 && i1 == 1 ) {
    playMem1.stop();
    i1 = 0;
    //playMem1.play(AudioSample1);
    Serial.print("we're re-playing #1");

    for (int j = 0; j < 255; j++) {
      leds[0].fadeToBlackBy( j );
      leds[1].fadeToBlackBy( j );

      FastLED.show();
      //FastLED.delay(5);
    }
    
  }

  if (pin2 > 3000 && i2 == 0) {
    playMem2.play(AudioSample2);
    i2 = 1;
    Serial.print("we're playing #2");
    leds[2] = CRGB::LightYellow;
    leds[3] = CRGB::LightYellow;
    FastLED.show();
    
  }
  else if (pin2 < 3000 && i2 == 1) {
    playMem2.stop();
    i2 = 0;
    //playMem2.play(AudioSample2);
    Serial.print("we're re-playing #2");
    for (int j = 0; j < 255; j++) {
      leds[2].fadeToBlackBy( j );
      leds[3].fadeToBlackBy( j );

      FastLED.show();
      //FastLED.delay(5);
  }
  }

  if (pin3 > 3000 && i3 == 0) {
    playMem3.play(AudioSample3);
    i3 = 1;
    Serial.print("we're playing #3");
    leds[4] = CRGB::LightYellow;
    leds[5] = CRGB::LightYellow;
    FastLED.show();
  }
  else if (pin3 < 3000 && i3 == 1) {
    playMem3.stop();
    //playMem3.play(AudioSample3);
    i3 = 0;
    Serial.print("we're re-playing #3");
    for (int j = 0; j < 255; j++) {
      leds[4].fadeToBlackBy( j );
      leds[5].fadeToBlackBy( j );

      FastLED.show();
      //FastLED.delay(5);
  }
  }

  if (pin4 > 3000 && i4 == 0) {
    playMem4.play(AudioSample4);
    i4 = 1;
    Serial.print("we're playing #4");
    leds[6] = CRGB::LightYellow;
    leds[7] = CRGB::LightYellow;
    FastLED.show();
  }
  else if (pin4 < 3000 && i4 == 1) {
    playMem4.stop();
    //playMem4.play(AudioSample4);
    i4 = 0;
    Serial.print("we're re-playing #4");
     for (int j = 0; j < 255; j++) {
      leds[6].fadeToBlackBy( j );
      leds[7].fadeToBlackBy( j );

      FastLED.show();
      //FastLED.delay(5);
  }
  }

  if (pin5 > 70000 && i5 == 0) {
    playMem5.play(AudioSample5);
    i5 = 1;
    Serial.print("we're playing #5");
    leds[8] = CRGB::LightYellow;
    leds[9] = CRGB::LightYellow;
    FastLED.show();
  }
  else if (pin5 < 70000 && i5 == 1) {
    playMem5.stop();
    // playMem5.play(AudioSample5);
    i5 = 0;
    Serial.print("we're re-playing #5");
     for (int j = 0; j < 255; j++) {
      leds[8].fadeToBlackBy( j );
      leds[9].fadeToBlackBy( j );

      FastLED.show();
      //FastLED.delay(5);
  }
  }

  if (pin6 > 3000 && i6 == 0) {
    playMem6.play(AudioSample6);
    i6 = 1;
    Serial.print("we're playing #6");
    leds[10] = CRGB::LightYellow;
    leds[11] = CRGB::LightYellow;
    FastLED.show();
  }
  else if (pin6 < 3000 && i6 == 1) {
    playMem6.stop();
    //playMem6.play(AudioSample6);
    i6 = 0;
    Serial.print("we're re-playing #6");
     for (int j = 0; j < 255; j++) {
      leds[10].fadeToBlackBy( j );
      leds[11].fadeToBlackBy( j );

      FastLED.show();
      //FastLED.delay(5);
  }
  }

  if (pin7 > 3000 && i7 == 0) {
    playMem7.play(AudioSample7);
    i7 = 1;
    Serial.print("we're playing #7");
    leds[12] = CRGB::LightYellow;
    leds[13] = CRGB::LightYellow;
    FastLED.show();
  }
  else if (pin7 < 3000 && i7 == 1) {
    playMem7.stop();
    //playMem7.play(AudioSample7);
    i7 = 0;
    Serial.print("we're re-playing #7");
    for (int j = 0; j < 255; j++) {
      leds[12].fadeToBlackBy( j );
      leds[13].fadeToBlackBy( j );

      FastLED.show();
      //FastLED.delay(5);
    }    
  }

  if (pin8 > 70000 && i8 == 0) {
    playMem8.play(AudioSample8);
    i8 = 1;
    Serial.print("we're playing #8");
    leds[14] = CRGB::LightYellow;
    leds[15] = CRGB::LightYellow;
    FastLED.show();
  }
  else if (pin8 < 70000 && i8 == 1) {
    playMem8.stop();
    //playMem8.play(AudioSample8);
    i8 = 0;
    Serial.println("we're re-playing #8");
    for (int j = 0; j < 255; j++) {
      leds[14].fadeToBlackBy( j );
      leds[15].fadeToBlackBy( j );

      FastLED.show();
      //FastLED.delay(5);
    } 
  }

  if (pin9 > 70000 && i9 == 0) {
    playMem9.play(AudioSample9);
    i9 = 1;
    Serial.print("we're playing #9");
    leds[16] = CRGB::LightYellow;
    leds[17] = CRGB::LightYellow;
    FastLED.show();
  }
  else if (pin9 < 70000 && i9 == 1) {
    playMem9.stop();
    //playMem9.play(AudioSample9);
    i9 = 0;
    Serial.print("we're re-playing #9");
     for (int j = 0; j < 255; j++) {
      leds[16].fadeToBlackBy( j );
      leds[17].fadeToBlackBy( j );

      FastLED.show();
      //FastLED.delay(5);
    } 
  }

  if (pin10 > 70000 && i10 == 0) {
    playMem10.play(AudioSample10);
    i10 = 1;
    Serial.print("we're playing #10");
    leds[18] = CRGB::LightYellow;
    leds[19] = CRGB::LightYellow;
    FastLED.show();
  }
  else if (pin10 < 70000 && i10 == 1) {
    playMem10.stop();
    //playMem10.play(AudioSample10);
    i10 = 0;
    Serial.print("we're re-playing #10");
     for (int j = 0; j < 255; j++) {
      leds[18].fadeToBlackBy( j );
      leds[19].fadeToBlackBy( j );

      FastLED.show();
      //FastLED.delay(5);
    }
  }
*/
 // FastLED.delay(50);
  Serial.println();

}

