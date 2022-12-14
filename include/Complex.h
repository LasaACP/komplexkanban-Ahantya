/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Complex
Author : _________
URL : NA
Description : The complex class for complex numbers, and the functions that can be used upon them
Created : _______
Modified : _______
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#ifndef COMPLASA_H
#define COMPLASA_H

#include <iostream>
//#include <complex>

using namespace std;
class Complex {
	//Class variables
	public:
		Complex();
		Complex(double r, double i);
		double real, imaginary;

    //----------------------------------------- OPERATOR OVERLOADS -----------------------------------------------------

	/**
     * Adds two complex numbers or a real to a complex number
     * @param com The complex/real number to add
     * @return complex
     * @author Nathan Gonzalez
     */
	Complex operator +(Complex other);
	Complex operator +(double other);

	/**
     * Subtracts two complex numbers or a real from a complex
     * @param com The complex/real number to subtract
     * @return complex
     * @author Aaron Lee
     */
	Complex operator -(Complex other);
	Complex operator -(double other);

	/**
     * Divides two complex numbers or a complex by a real 
     * @param com The complex/real number to divide by
     * @return complex
     * @author Ahantya Sharma
     */
	Complex operator / (Complex other);
	Complex operator / (double other);

	/**
     * Multiplies two complex numbers or a complex by a real
     * @param com The complex/real number to multiply by
     * @return complex
     * @author Sanchit Rai
     */
	Complex operator * (Complex other);
	Complex operator * (double other);	

	/**
     * Adds two complex numbers or a complex and a real and applies the result to the left hand side object
     * @param com The complex/real number to add
     * @return complex
     * @author Aaron Lee
     */
	Complex& operator +=(Complex other);
	Complex& operator +=(double other);

	/**
     * Subtracts two complex numbers or a real from a complex and applies the result to the left hand side object
     * @param com The complex/real number to subtract
     * @return complex
     * @author Nathan Gonzalez
     */
	Complex& operator -=(Complex other);
	Complex& operator -=(double other);

  /**
     * Divides two complex numbers or a real from a complex and applies the result to the left hand side object
     * @param com The complex/real number to divide
     * @return complex
     * @author Aaron Lee
     */
  Complex& operator /= (Complex other);
	Complex& operator /= (double other);	

  /**
     * Multiplies two complex numbers or a real from a complex and applies the result to the left hand side object
     * @param com The complex/real number to multiply
     * @return complex
     * @author Nathan Gonzalez
     */
  Complex& operator *= (Complex other);
	Complex& operator *= (double other);	

	/**
     * Compares a complex number to a complex/real number: if the real and imaginary parts are equal (a real number's imaginary part is 0)  returns true
     * @param com The complex/real number to subtract
     * @return boolean: true if complex are equal, else false
     * @author Aaron Lee
     */
	bool operator ==(Complex other);
	bool operator ==(double other);


  /**
     * Compares a complex number to a complex/real number: if the real and imaginary parts are not equal (a real number's imaginary part is 0)  returns true
     * @param com The complex/real number to subtract
     * @return boolean: true if complex are not equal, else false
     * @author Sanchit Rai
     */
	bool operator !=(Complex other) const;
  bool operator !=(double other) const;
  
  
  
      //------------------------------------- ARITHMETIC LIBRARY FUNCTIONS -------------------------------------------

    /**
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author Aaron Lee
     */
     friend double abs(Complex other);

    /**
     * Returns the angle of a complex number
     * @param com the complex number 
     * @return the angle in the form of a double
     * @author Aaron Lee
     */
     friend double arg(Complex other);

    /**
     * Returns the conjugate of complex number
     * @param com the complex number to find the conjugate of
     * @return the conjugate of complex number
     * @author Nathan Gonzalez
     */
     friend Complex conj(Complex other);

    /**
     * Returns the imaginary part of the complex numer
     * @param complex number
     * @return the imaginary part of com
     * @author Sanchit Rai
     */
     friend double imag(Complex& other);

    /**
     * Returns the square of magnitude of com
     * @param complex number
     * @return the magnitude of a complex number
     * @author Ahantya Sharma
     */
     friend double norm(Complex other);

    /**
     * Returns the polar coordinates of a complex number
     * @param com the complex number to find the absolute value of
     * @returns a complex number
     * @author Aaron Lee
     */
     friend Complex polar(double mag, double ang);

    /**
     * Returns the real part of a complex number
     * @param com the complex number to return the real of
     * @return the real part of the complex
     * @author Nathan Gonzalez
     */
     friend double real(Complex& other);


  
  //------------------------------------- MATHEMATIC AND TRIG LIBRARY FUNCTIONS -------------------------------------------

    /**
     * Returns the square root of com
     * @param com the complex number to square root
     * @return complex square root
     * @author Nathan Gonzalez
     */
     friend Complex sqrt(Complex& other);

    /**
     * Returns the result of a complex or real to a real or complex power
     * @param com base and exponent of the expression
     * @return the result of the mathematical operation
     * @author Nathan Gonzalez
     */

     friend Complex pow(Complex base, double exp);
     friend Complex pow(double base, Complex exp);
     friend Complex pow(Complex base, Complex exp);

    /**
     * Returns the result of cos of a complex number.
     * @param complex number
     * @return the result of the mathematical operation
     * @author Aaron Lee
     */
  
    friend Complex cos(Complex other);

    /**
     * Returns the result of sine of a complex number.
     * @param complex number
     * @return the result of the mathematical operation
     * @author Ahantya Sharma
     */
  
    friend Complex sin (const Complex value);


    /**
     * Returns the result of e raised to a complex number.
     * @param the complex number
     * @return the result of the mathematical operation
     * @author Ahantya Sharma
     */

    friend Complex exp (const Complex value);

    /**
     * Returns the the natural logarithm of its argument. 
     * @param the complex number
     * @return the result of the mathematical operation using a log.
     * @author Nathan Gonzalez
     */

    friend Complex log (const Complex value);


  
}; // Complex class declaration

#endif
