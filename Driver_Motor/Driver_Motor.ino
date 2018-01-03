/*
 * Driver de motores via I2C
 */
#include <Wire.h>
#include "set_pin.h"

volatile uint8_t input[2];

void setup() {
  Serial.begin(9600);
  init_pin();
  // Start the I2C Bus as Slave on address 9
  Wire.begin(9); 
  // Attach a function to trigger when something is received.
  Wire.onReceive(receiveEvent);
}

void receiveEvent(int bytes) {
  while( Wire.available()){
    input[0]=Wire.read();
    input[1]=Wire.read();
  }
}

void loop() {
  process_com();
}
