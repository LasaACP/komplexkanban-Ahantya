/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexConj.cpp
Author : Nathan Gonzalez
URL : NA
Description : The implementation of this function returns the conjugate of a complex number. Written by Nathan Gonzalez
Created : Nov. 28th
Modified : Dec. 5th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"

Complex conj(Complex comp)
{
  return Complex(comp.real, -comp.imaginary);
}


