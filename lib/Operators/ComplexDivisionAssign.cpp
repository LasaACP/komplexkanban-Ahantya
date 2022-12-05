/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexDivision.cpp
Author : Ahantya Sharma
URL : NA
Description : The implementation for ComplexDivisionAssign.cpp overloads the division assign symbol in order to divide complex numbers.
Created : Nov. 28th
Modified : Dec. 5th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/


#include "../../include/Complex.h"

Complex& Complex::operator /= (Complex other)
{
	double a = real;
	double b = imaginary;
	double c = other.real;
	double d = other.imaginary;

	double newImaginary = ((b * c) - (a * d)) / ((c * c) + (d * d));
	double newReal = ((a * c) + (b * d)) / ((c * c) + (d * d));

  real = newReal;
  imaginary = newImaginary;
	return *this;
}

Complex& Complex::operator /= (double other) {
  real = real / other;
  imaginary = imaginary / other.imaginary;
	return *this
}