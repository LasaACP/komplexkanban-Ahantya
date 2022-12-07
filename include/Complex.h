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
  
  
  
  
      //------------------------------------- ARITHMETIC LIBRARY FUNCTIONS -------------------------------------------

    /**
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author Aaron Lee
     */
     friend double abs(Complex other);

    /**
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author Aaron Lee
     */
     friend double arg(Complex other);

    /**
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author Aaron Lee
     */
     friend Complex conj(Complex other);

    /**
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author Aaron Lee
     */
     friend double imag(Complex& other);

    /**
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author Aaron Lee
     */
     friend double norm(Complex other);

    /**
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author Aaron Lee
     */
     friend Complex polar(double mag, double ang);

    /**
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author Aaron Lee
     */
     friend double real(Complex& other);


  
  //------------------------------------- MATHEMATIC AND TRIG LIBRARY FUNCTIONS -------------------------------------------

    /**
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author Aaron Lee
     */
     friend Complex cos(Complex other);
  
  
  
}; // Complex class declaration

#endif