/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexSqrt.cpp
Author : Nathan Gonzalez
URL : NA
Description : The implementation of this function returns the square root of a complex number. Written by Nathan Gonzalez
Created : Nov. 28th
Modified : Dec. 7th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"
#include <cmath>

//basic function to return the sign of a double (-1.0, 0.0, or 1.0)
double sgn(double val) {
    return (0 < val) - (val < 0);
}

Complex sqrt(Complex& other)
{
  double a = other.real;
  double b = other.imaginary;

  //http://stanleyrabinowitz.com/bibliography/complexSquareRoot.pdf
  double newReal = 1/sqrt(2) * sqrt(sqrt(pow(a, 2) + pow(b, 2)) + a);
  double newImaginary = sgn(b)/sqrt(2) * sqrt(sqrt(pow(a, 2) + pow(b, 2)) - a);

  return Complex(newReal, newImaginary);
}