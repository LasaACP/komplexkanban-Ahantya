/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexCos.cpp
Author : Aaron Lee
URL : NA
Description : The implementation for a function that returns the cos of a complex number that was written by Aaron Lee. 
Created : Dec. 5th
Modified : Dec. 7th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"
#include <cmath>

Complex cos(Complex other){
  double tempReal = cos(other.real) * cosh(other.imaginary);
  double tempImag = sin(other.real) * sinh(other.imaginary);
  return Complex(tempReal, tempImag);
}