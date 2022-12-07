/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexExp.cpp
Author : Ahantya Sharma
URL : NA
Description : The implementation of this function returns the sin of a complex number. Written by Ahantya Sharma
Created : Nov. 28th
Modified : Dec. 5th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"
#include <cmath>
#define e 2.718281828459045

Complex exp(const Complex other) {

    //e^(a + i * b) = e^a * e^(i * b), e^(i * b) = cos(b) + i * sin(b)
    //pow(e, other.real) * cos(other.imaginary);
    double secondhalf = pow(e, other.real) * sin(other.imaginary);
    return Complex(pow(e, other.real) * cos(other.imaginary), secondhalf);
      

}





//https://exercism.org/tracks/cpp/exercises/complex-numbers

