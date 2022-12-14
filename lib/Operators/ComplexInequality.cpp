/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexInequality.cpp
Author : Sanchit Rai
URL : N/A
Description : The implementation for complex inequality operator that was written by Sanchit Rai.
Created : Nov. 30th
Modified : Dec. 14th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"

bool Complex::operator !=(Complex other) const
{
	return (real != other.real && imaginary != other.imaginary);
}

bool Complex::operator !=(double other) const
{
	return (imaginary != 0 || (other != real && imaginary == 0));
}

