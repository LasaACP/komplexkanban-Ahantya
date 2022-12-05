/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexOutput.cpp
Author : Ahantya Sharma
URL : NA
Description : The implementation for complex number input that was written by Nathan Gonzalez. Adds functionality for printing the complex output.
Created : Nov. 30th
Modified : Dec. 5th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <fstream>
#include <iostream>
#include "../../include/Complex.h"

ostream& operator << (ostream &out, const complex&d); 
{
    out << d.real;
    out << "+" << d.imaginary << "i" << endl;
    return out;
  
}