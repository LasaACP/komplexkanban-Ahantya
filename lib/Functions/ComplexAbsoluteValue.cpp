/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexAbs.cpp
Author : Aaron Lee
URL : NA
Description : The implementation for the complex number absolute value function that was written by Aaron Lee. 
Created : Dec. 5th
Modified : Dec. 5th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"
#include <cmath>
double abs(Complex other){
  
  return sqrt(pow(other.real,2.0) + pow(other.imaginary, 2.0));

}