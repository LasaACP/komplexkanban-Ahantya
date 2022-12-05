/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexSubtraction.cpp
Author : Aaron Lee
URL : NA
Description : The implementation for complex number subtraction that was written by Aaron Lee.
Created : Nov. 30th
Modified : Nov. 30th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"

Complex Complex::operator -(Complex other)
{
	return Complex(real - other.real, imaginary - other.imaginary);
}

Complex Complex::operator -(double other)
{
	return Complex(real - other, imaginary);
}

