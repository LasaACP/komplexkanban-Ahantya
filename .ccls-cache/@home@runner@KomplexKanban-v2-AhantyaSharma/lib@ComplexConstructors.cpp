/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexConstrutors.cpp
Author : Sanchit Rai
URL : NA
Description : The implementation for Complex.h that was written by Sanchit Rai. Adds functionality for using complex constructors.
Created : Nov. 28th
Modified : Nov. 30th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"

Complex::Complex()
{
	real = 0;
	imaginary = 0;
}

Complex::Complex(double r, double i)
{
	real = r;
	imaginary = i;
}