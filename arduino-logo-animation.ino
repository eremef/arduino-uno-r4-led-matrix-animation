#include "Arduino_LED_Matrix.h"
#include "logo01.h"
#include "logo02.h"
#include "logo03.h"

ArduinoLEDMatrix matrix;
const uint32_t length = 10000; //10 secs

void setup() {
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
}

void loop() {
  play();  
}
