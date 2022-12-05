/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexAdditionAssign.cpp
Author : Aaron Lee
URL : NA
Description : The implementation for complex number addition assignment that was written by Aaron Lee.
Created : Nov. 30th
Modified : Nov. 30th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"

Complex& Complex::operator +=(Complex other)
{
	real = real + other.real;
	imaginary = imaginary + other.imaginary;

	return *this;
}

Complex& Complex::operator +=(double other)
{
	real = real + other;
	
	return *this;
}

