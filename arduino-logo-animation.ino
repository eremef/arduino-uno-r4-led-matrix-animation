#include "Arduino_LED_Matrix.h"
#include "logo01.h"
#include "logo02.h"
#include "logo03.h"
#include "anim01.h"
#include "anim02.h"
#include "anim03.h"
#include "anim04.h"

const uint32_t fullOff[][4] = {
  {
	  0x00000000,
	  0x00000000,
	  0x00000000,
    250
  }
};

ArduinoLEDMatrix matrix;
const uint32_t length = 10000; //10 secs

void setup() {
    matrix.loadSequence(fullOff);  
    matrix.begin();
    matrix.play(true); 
}

void play(){
  matrix.loadSequence(logo01);
  delay(length);

  matrix.loadSequence(logo02);
  delay(length);

  matrix.loadSequence(logo03);
  delay(length); 

  matrix.loadSequence(anim01);
  delay(length); 

  matrix.loadSequence(anim02);
  delay(length); 

  matrix.loadSequence(anim03);
  delay(length); 

  matrix.loadSequence(anim04);
  delay(length);   
}

void loop() {
  play();  
}
