/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexEqualityOperator.cpp
Author : Aaron Lee
URL : NA
Description : The implementation for complex equality operator that was written by Aaron Lee.
Created : Nov. 30th
Modified : Nov. 30th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"

bool Complex::operator ==(Complex other)
{
	return (real == other.real && imaginary == other.imaginary);
}

bool Complex::operator ==(double other)
{
	return (imaginary == 0 && other == real);
}

