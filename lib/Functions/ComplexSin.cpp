/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexSin.cpp
Author : Ahantya Sharma
URL : NA
Description : The implementation of this function returns the sine of a complex number. Written by Ahantya Sharma.
Created : Nov. 28th
Modified : Dec. 7th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/


#include "../../include/Complex.h"

#include <cmath>

Complex sin(const Complex other) {
  double firsthalf = sin(other.real) * cosh(other.imaginary);
  double secondhalf = cos(other.real) * sinh(other.imaginary);
  return Complex(firsthalf, secondhalf);
}
