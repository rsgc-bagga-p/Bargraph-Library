/*
  Bargraph.cpp- Library for intersection simulation.
  Created by Puneet Singh Bagga, November 12th, 2015
  Purpose: Create a library for the Bargraph
*/

#include "Arduino.h"
#include "BargraphPB.h"

BargraphPB::BargraphPB(int* pins, int number){
  _pins = pins;
  for(int i = 0; i < number; i++){
    pinMode(_pins[i], OUTPUT);
  }
  number = _number;
}

//which pins on
void BargraphPB::value(int val){
_val = val;
for (int i = 0; i< _val; i++){
  digitalWrite(_pins[i], HIGH);
}
}

//count from 1 to a number and back
void BargraphPB::count(int val2){
  _val2 = val2;
  for(int i = 0; i < _val2; i++){
    digitalWrite(_pins[i], HIGH);
    delay(500);
  }
  for(int j = _val2; j > 0; j--){
    digitalWrite(_pins[j],LOW);
    delay(500);
  }
}

// dots up and down the graph
void BargraphPB::dotTest(int val3){
  _val3 = val3;
  for (int i = 0; i < _val3; i++) {
  digitalWrite(_pins[i], HIGH);
  digitalWrite(_pins[i - 1], LOW);
  delay(500);
}

for (int j = _val3; j >= 0; j--) {
  digitalWrite(_pins[j], HIGH);
  digitalWrite(_pins[j + 1], LOW);
  delay(500);
}
}

// decimal to binary
void BargraphPB::binary(int input){
  _input = input;
  for (int i = 0; i < _input; i++){
    digitalWrite(_pins[i], bitRead(input, i));
}
}

//off

void BargraphPB::off(){
  for (int i = 0; i< _number; i++){
    digitalWrite(_pins[i], LOW);
  }
}
