/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexAddition.cpp
Author : Nathan Gonzalez
URL : NA
Description : The implementation for complex number addition that was written by Nathan Gonzalez. Adds functionality for adding complex numbers
Created : Nov. 30th
Modified : Nov. 30th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"

Complex Complex::operator +(Complex other)
{
	return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator +(double other)
{
	return Complex(real + other, imaginary);
}