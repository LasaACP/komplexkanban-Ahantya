/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexMultiplicationAssign.cpp
Author : Nathan Gonzalez
URL : NA
Description : The implementation for complex number multiplication assignment that was written by Nathan Gonzalez.
Created : Dec. 1st
Modified : Dec. 1st
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"

Complex& Complex::operator *=(Complex other)
{
	//multiply rhs parts by this object's parts
	real = real * other.real;
	imaginary = imaginary * other.imaginary;

	return *this;
}

Complex& Complex::operator *=(double other)
{
	//multiply real by both this object's parts
	real = real * other;
	imaginary = imaginary * other;

	return *this;
}

