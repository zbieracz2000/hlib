/*
	Hlib - Library for driving DC motors with L298N H Bridge.
	2021 zbieracz2000
*/
#ifndef Hlib_h
#define Hlib_h

#include "Arduino.h"

class Hlib {
  public:
	Hlib(int EN_A, int EN_B, int IN_1A, int IN_1B, int IN_2A, int IN_2B); 
    void FWD_A(int SPD_A);
	void BWD_A(int SPD_A);
	void FWD_B(int SPD_B);
	void BWD_B(int SPD_B);
	void STOP_A();
	void STOP_B();
  private:
	//int SPD_A;
	//int SPD_B;
    int _EN_A;
    int _EN_B;
    int _IN_1A;
    int _IN_1B;
    int _IN_2A;
    int _IN_2B;
};

#endif