/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexSin.cpp
Author : Ahantya Sharma
URL : NA
Description : The implementation of this function returns the sin of a complex number. Written by Ahantya Sharma
Created : Nov. 28th
Modified : Dec. 5th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"
#include <cmath>

double Complex::sin(Complex other){
  return (other.real^2+other.imaginary^2)^(1/2);
}





