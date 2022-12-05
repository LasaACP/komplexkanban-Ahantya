/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexSubtractionAssign.cpp
Author : Nathan Gonzalez
URL : NA
Description : The implementation for complex number subtraction assignment that was written by Nathan Gonzalez.
Created : Dec. 1st
Modified : Dec. 1st
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"

Complex& Complex::operator -=(Complex other)
{
	//subtract rhs parts from this object's parts
	real = real - other.real;
	imaginary = imaginary - other.imaginary;

	return *this;
}

Complex& Complex::operator -=(double other)
{
	//subtract real only subtracts from this object's real
	real = real - other;

	return *this;
}

