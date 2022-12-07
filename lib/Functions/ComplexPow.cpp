/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexPow.cpp
Author : Nathan Gonzalez
URL : NA
Description : The implementation of this function returns the complex value of a complex/real to a complex/real power. Written by Nathan Gonzalez
Created : Nov. 28th
Modified : Dec. 5th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"
#include <cmath>

#define e 2.718281828459045

Complex pow(Complex base, double exp)
{
  double a = base.real;
  double b = base.imaginary;
  double r = abs(base);
  double theta = arg(base);
  
  /*(a+bi)^c = r^c * cos(c*theta) + i * r^c * sin(c * theta)
  where r = sqrt(a^2 + b^2) (abs) and theta is atan(b/a) (arg)*/
  double newReal = pow(r, exp) * cos(exp * theta);
  double newImaginary = pow(r, exp) * sin(exp * theta);
  
  return Complex(newReal, newImaginary);
}

Complex pow(double base, Complex exp)
{
  double b = exp.real;
  double c = exp.imaginary;

  //a^(b+ci) = a^b * cos(c * ln(a)) + i * a^b * sin(c * ln(a))
  double newReal = pow(base, b) * cos(c * log(base));
  double newImaginary = pow(base, b) * sin(c * log(base));

  return Complex(newReal, newImaginary);
}

Complex pow(Complex base, Complex exp)
{
  double c = exp.real;
  double d = exp.imaginary;
  double r = abs(base);
  double theta = arg(base);

  /*(a+bi)^(c+di) = e^(ln(r)(c+id)+i(theta)(c+id))
  where r = sqrt(a^2 + b^2) (abs) and theta is atan(b/a) (arg) */
  Complex newComplex = Complex(log(r), theta) * Complex(c, d);
  
  return pow(e, newComplex);
}