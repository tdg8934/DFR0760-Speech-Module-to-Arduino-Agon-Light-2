/*!
 * @file i2c.ino
 * @brief Control speech synthesis sensor via I2C, and synthetise speech 
 * @details phenomena£ºthe speaker of the module plays English on a loop
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @license     The MIT License (MIT)
 * @author [fengli](li.feng@dfrobot.com)
 * @version  V1.0
 * @date  2020-11-6
 * @url https://github.com/DFRobot/DFRobot_SpeechSynthesis_V2
 */
#include "DFRobot_SpeechSynthesis_V2.h"
DFRobot_SpeechSynthesis_I2C ss;

void setup() {
  Serial.begin(115200);
  //Init speech synthesis sensor
  ss.begin();
  //Set voice volume to 5
  ss.setVolume(1);
  //Set playback speed to 5
  ss.setSpeed(5);
  //Set tone to 5
  ss.setTone(5);
  //For English, speak word 
  ss.setEnglishPron(ss.eWord);
  
}


void loop() {
  while (Serial.available()==0) {

  }
  String msg = Serial.readString();
  
  ss.speak(F("Hello"));
  ss.speak((msg));
  ss.speak(F("Pick a screen mode"));
  //ss.speak(F("a b c d e f g"));
  delay(1000);
  

  /*Use text control identifier*/
  //Voice volume identifier 
  //ss.speak(F("[v3]Hello [v8]world"));
  //Word Pronounce mode identifier 
  //ss.speak(F("[h1]Hello [h2]world"));
}
