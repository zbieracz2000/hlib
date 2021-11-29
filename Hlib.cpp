#include "Arduino.h"
#include "Hlib.h"

Hlib::Hlib(int EN_A, int EN_B, int IN_1A, int IN_1B, int IN_2A, int IN_2B)
{	
  pinMode(EN_A, OUTPUT);
  _EN_A = EN_A;
  pinMode(EN_B, OUTPUT);
  _EN_B = EN_B;
  pinMode(IN_1A, OUTPUT);
  _IN_1A = IN_1A;
  pinMode(IN_1B, OUTPUT);
  _IN_1B = IN_1B;
  pinMode(IN_2A, OUTPUT);
  _IN_2A = IN_2A;
  pinMode(IN_2B, OUTPUT);
  _IN_2B = IN_2B;
}
void Hlib::FWD_A(int SPD_A)
{
  analogWrite(_EN_A, SPD_A);
  digitalWrite(_IN_1A, HIGH);
  digitalWrite(_IN_2A, LOW);	
}
void Hlib::BWD_A(int SPD_A)
{
  analogWrite(_EN_A, SPD_A);
  digitalWrite(_IN_1A, LOW);
  digitalWrite(_IN_2A, HIGH);	
}
void Hlib::FWD_B(int SPD_B)
{
  analogWrite(_EN_B, SPD_B);
  digitalWrite(_IN_1B, HIGH);
  digitalWrite(_IN_2B, LOW);	
}
void Hlib::BWD_B(int SPD_B)
{
  analogWrite(_EN_B, SPD_B);
  digitalWrite(_IN_1B, LOW);
  digitalWrite(_IN_2B, HIGH);	
}
void Hlib::STOP_A()
{
  analogWrite(_EN_A, 0);
  digitalWrite(_IN_1A, HIGH);
  digitalWrite(_IN_2A, HIGH);	
}
void Hlib::STOP_B()
{
  analogWrite(_EN_B, 0);
  digitalWrite(_IN_1B, HIGH);
  digitalWrite(_IN_2B, HIGH);	
}