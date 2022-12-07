/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexLog.cpp
Author : Nathan Gonzalez
URL : NA
Description : The implementation for a function that takes the natural logarithm of a complex number. 
Created : Dec. 7th
Modified : Dec. 7th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"
#include <cmath>

Complex log(Complex other){
  //https://books.physics.oregonstate.edu/LinAlg/logs.html
  
  double r = abs(other);
  double theta = arg(other);
  
  return Complex(log(r), theta);
}