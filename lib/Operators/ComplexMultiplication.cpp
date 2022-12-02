/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexMultiplication.cpp
Author : Sanchit Rai
URL : NA
Description : The implementation for ComplexMultiplication.cpp overloads the multiplication symbol in order to multiply complex numbers.
Created : Nov. 28th
Modified : Nov. 30th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/


#include "../../include/Complex.h"

Complex Complex::operator * (Complex other)
{
	double a = real;
	double b = imaginary;
	double c = other.real;
	double d = other.imaginary;

	double newImaginary = ((a * d) + (b * c));
	double newReal = ((a * c) - (b * d));

	return Complex(newReal, newImaginary);
}

Complex Complex::operator * (double other) {
	return Complex(real * other, imaginary * other)
}