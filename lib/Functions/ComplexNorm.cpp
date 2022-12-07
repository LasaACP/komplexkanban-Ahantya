
/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexNorm.cpp
Author : Ahantya Sharma
URL : NA
Description : The implementation of this function returns the sqaure of the magnitude of the complex number. Written by Ahantya Sharma
Created : Nov. 30th
Modified : Dec. 7th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"
#include <cmath>

double norm(const Complex other) {
  double num = abs(other);
  return pow(num, 2);
}

