/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexAddition.cpp
Author : Nathan Gonzalez
URL : NA
Description : The implementation for complex number input that was written by Nathan Gonzalez. Adds functionality for taking complex input
Created : Nov. 30th
Modified : Nov. 30th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <fstream>
#include <iostream>
#include "../../include/Complex.h"

istream& operator >>(istream& lhs, Complex& rhs)
{
	//Define string to input complex numbers in the form (real, imaginary)
    string newComplex;
	lhs >> newComplex;

	//Splitter index for the real and imaginary parts
	int middle = newComplex.find(",");
	
	double newReal = stod(newComplex.substr(1, middle));
	double newImaginary = stod(newComplex.substr(middle + 1, newComplex.length() - 1));
    
    rhs.real = newReal;
	rhs.imaginary = newImaginary;
	
	return lhs;
}