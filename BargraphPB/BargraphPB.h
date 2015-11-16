/*
  Bargraph.h- Library for a bargraph
  Created by Puneet Singh Bagga, November 12th, 2015
  Purpose: Create a library for the bargraph
*/
#ifndef BargraphPB_h
#define BargraphPB_h

#include "Arduino.h"

class BargraphPB
{
  public:
    BargraphPB(int* pins, int number);
    void value(int val);
    void count(int val2);
    void binary(int input);
    void dotTest(int val3);
    void off();
  private:
    int* _pins;
    int _number;
    int _val;
    int _val2;
    int _val3;
    int _input;
};

#endif
