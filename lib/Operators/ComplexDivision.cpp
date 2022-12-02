/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexDivision.cpp
Author : Ahantya Sharma
URL : NA
Description : The implementation for ComplexDivision.cpp overloads the division symbol in order to divide complex numbers.
Created : Nov. 28th
Modified : Nov. 30th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/


#include "../../include/Complex.h"

Complex Complex::operator / (Complex other)
{
	double a = real;
	double b = imaginary;
	double c = other.real;
	double d = other.imaginary;

	double newImaginary = ((b * c) - (a * d)) / ((c * c) + (d * d));
	double newReal = ((a * c) + (b * d)) / ((c * c) + (d * d));

	return Complex(newReal, newImaginary);
}

Complex Complex::operator / (double other) {
	return Complex(real / other.real, imaginary / other.real)
}