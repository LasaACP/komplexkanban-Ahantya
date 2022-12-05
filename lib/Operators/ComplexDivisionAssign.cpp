/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexDivisionAssign.cpp
Author : Aaron Lee
URL : NA
Description : The implementation for complex number division assignment that was written by Aaron Lee.
Created : Dec. 5th
Modified : Dec. 5th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"

Complex& Complex::operator /=(Complex other)
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

Complex& Complex::operator /=(double other)
{
	real = real / other;
	imaginary = imaginary / other;

	return *this;
}

