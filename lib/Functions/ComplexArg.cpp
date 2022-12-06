/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexArg.cpp
Author : Aaron Lee
URL : NA
Description : The implementation of this function returns the angle of a complex number. Written by Aaron Lee.
Created : Dec. 5th
Modified : Dec. 5th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"
#include <cmath>

double arg(Complex other) {
  return atan(other.imaginary/other.real)*180/3.14159265359;
}


