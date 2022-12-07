/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexPolar.cpp
Author : Aaron Lee
URL : NA
Description : The implementation for a function that determines the complex number given polar coordinates that was written by Aaron Lee. 
Created : Dec. 5th
Modified : Dec. 5th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"
#include <cmath>

Complex polar(double mag, double ang){
  double temp1 = (mag) * cos(ang);
  temp1 = round(temp1);
  double temp2 = (mag) * sin(ang);
  temp2 = round(temp2);
  return Complex(temp1, temp2);
}