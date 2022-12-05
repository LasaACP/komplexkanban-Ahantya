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

double Complex::abs(Complex other){
  return (other.real^2+other.imaginary^2)^(1/2);
}