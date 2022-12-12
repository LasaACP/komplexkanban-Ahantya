#include <cstdlib>
#include <iostream>
#include "../include/Complex.h"
#include "../tests/catch_amalgamated.hpp"
#include "../tests/catch_amalgamated.cpp"


#include "../lib/ComplexConstructors.cpp"
//Operators
#include "../lib/Operators/ComplexAddition.cpp"
#include "../lib/Operators/ComplexAdditionAssign.cpp"
#include "../lib/Operators/ComplexDivision.cpp"
#include "../lib/Operators/ComplexDivisionAssign.cpp"
#include "../lib/Operators/ComplexEqualityOperator.cpp"
#include "../lib/Operators/ComplexInput.cpp"
#include "../lib/Operators/ComplexMultiplication.cpp"
#include "../lib/Operators/ComplexMultiplicationAssign.cpp"
#include "../lib/Operators/ComplexOutput.cpp"
#include "../lib/Operators/ComplexSubtraction.cpp"
#include "../lib/Operators/ComplexSubtractionAssign.cpp"
//Functions
#include "../lib/Functions/ComplexAbsoluteValue.cpp"
#include "../lib/Functions/ComplexConj.cpp"
#include "../lib/Functions/ComplexReal.cpp"
#include "../lib/Functions/ComplexArg.cpp"
#include "../lib/Functions/ComplexPolar.cpp"
#include "../lib/Functions/ComplexPow.cpp"
#include "../lib/Functions/ComplexSqrt.cpp"
#include "../lib/Functions/ComplexLog.cpp"


#include "fac.h"

using namespace std;

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN

int main( int argc, char* argv[] ) {
  // global setup...
	cout << "hello";
	
  int result = Catch::Session().run( argc, argv );

  // global clean-up...
    cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else    //Not CATCH_AMALGAMATED_CUSTOM_MAIN

TEST_CASE("Catch2 Test", "[Catch2]")
{
  REQUIRE(1 + 2 == 3);
  REQUIRE(2 + 3 == 4);
  
  Complex a(3.0,4.0),b(2.0, 3.0);
  double c = 4;

  cout << "a = " << a << "\n";
  cout << "b = " << b << "\n";
  cout << "c = " << c<< "\n\n";
  
  
  //complex testing
  cout << "complex testing for operators:" << "\n";

  REQUIRE((a + b).real == 5.0);
  REQUIRE((a + b).imaginary == 7.0);

  REQUIRE((a - b).real == 1.0);
  REQUIRE((a - b).imaginary == 1.0);

  REQUIRE((a / b).real == 1.38462);
  REQUIRE((a / b).imaginary == -0.0769231);

  REQUIRE((a * b).real == -6);
  REQUIRE((a * b).imaginary == 17);
  
  a += b;
  REQUIRE(a.real == 5.0);
  REQUIRE(a.imaginary == 7.0);
  
  a -= b;
  REQUIRE(a.real == 5.0);
  REQUIRE(a.imaginary == 7.0);
  
  a /= b;
  REQUIRE(a.real == 1.38462);
  REQUIRE(a.imaginary == -0.0769231);
  
  a *= b;
  REQUIRE(a.real == 3.0);
  REQUIRE(a.imaginary == 4.0);

    //Arithmetic Library Function testing
    cout << "Arithmetic Library Function testing:" << "\n";
  
    cout << "|a| = "   << abs(a) << "\n";         //abs

  REQUIRE(abs(a) == 5);
  
    cout << "(a == b) = " << (a == b) << "\n";    //equality for complex

  REQUIRE(!(a == b));
  
    cout << "(a == c) = " << (a == c) << "\n";    //equality for double

  REQUIRE(!(a == c));
  
    cout << "complex conjugate of a = " << conj(a) << "\n";

  REQUIRE(conj(a).real == 3.0);
  REQUIRE(conj(a).real == -4.0);
  
    cout << "angle of a = " << arg(a) << "\n";

  REQUIRE(arg(a) == 0.927295);
  
    cout << "complex form for (5.39, 0.38) = " << polar(5.39, 0.38) << "\n";

  REQUIRE(polar(5.39, 0.38).real == 5.0);
  REQUIRE(polar(5.39, 0.38).imaginary == 2.0);
  
  cout << "norm of a = " << norm(a) << "\n";

  REQUIRE(norm(a) == 25.0);

  cout << "exp(a) = " << exp(a) << "\n";

  REQUIRE(exp(a).real == -13.1288);
  REQUIRE(exp(a).imaginary == -15.2008);

  cout << "The sqrt is: " << sqrt(a) << "\n";

  REQUIRE(sqrt(a).real == 2.0);
  REQUIRE(sqrt(a).imaginary == 1.0);
  
  cout << "The natural log is: " << log(a) << "\n";

  REQUIRE(log(a).real == 1.609438);
  REQUIRE(log(a).imaginary == 0.927295);
  
  cout << "The sin is: " << sin(a) << "\n";

  REQUIRE(sin(a).real == 3.85374);
  REQUIRE(sin(a).imaginary == -27.0168);

  cout << "The cos is: " << cos(a) << "\n";

  REQUIRE(sin(a).real == -27.0349);
  REQUIRE(sin(a).imaginary == 3.85115);

  cout << "The real part is: " << real(a) << "\n";

  REQUIRE(real(a) == 3.0);

  cout << "a^2.7 is: " << pow(a, 2.7) << "\n";

  REQUIRE(pow(a, 2.7).real == -61.9618);
  REQUIRE(pow(a, 2.7).imaginary == 45.9309);

  cout << "2.7^a is: " << pow(2.7, a) << "\n";

  REQUIRE(pow(2.7, a).real == -13.263);
  REQUIRE(pow(2.7, a).imaginary == -14.5435);

  cout << "a^b is: " << pow(a, b) << "\n";

  REQUIRE(pow(a, b).real == 1.42601);
  REQUIRE(pow(a, b).imaginary == 0.602435);

    /* other function testing */
    /*
    cout << "\n------ OTHER FUNCTION TESTING ------\n\n";*/
    //cout << "The real part is: " << real(a) << "\n";
    /*
    cout << "The imaginary part is: " << imag(a) << "\n";
    cout << "The log (base 10) is: " << log10(a) << "\n";
    cout << "a^b is: " << pow(a, b) << "\n";
*/
    //cout << "a^2.7 is: " << pow(a, 2.7) << "\n";
    //cout << "2.7^a is: " << pow(2.7, a) << "\n";
    //cout << "a^b is: " << pow(a, b) << "\n"; 
  /*
    cout << "The cube root is: " << root(a, 3) << "\n\n";

    cout << "(a == b) is: " << ((a==b) ? "true" : "false") << "\n";
    cout << "(a != b) is: " << ((a!=b) ? "true" : "false") << "\n\n";

    cout << "sin(a) = " << sin(a) << "\n";
    cout << "cos(a) = " << cos(a) << "\n";
    cout << "tan(a) = " << tan(a) << "\n\n";

    cout << "The asin is: " << asin(a) << "\n";
    cout << "The acos is: " << acos(a) << "\n";
    cout << "The atan is: " << atan(a) << "\n";
    cout << "The acsc is: " << acsc(a) << "\n";
    cout << "The asec is: " << asec(a) << "\n";
    cout << "The acot is: " << acot(a) << "\n\n";

    cout << "The asinh is:" << asinh(a) << "\n";
    cout << "The acosh is: " << acosh(a) << "\n";
    cout << "Rounded to 2 decimal places: " << acosh(a).rnd(2) << "\n";
    cout << "The atanh is: " << atanh(a) << "\n";
    cout << "The acsch is: " << acsch(a) << "\n";
    cout << "The asech is: " << asech(a) << "\n";
    cout << "The acoth is: " << acoth(a) << "\n";
    cout << "The complex number rotated by pi/6 radians is: " << rotate(a, PI/6) << "\n";
    */
//}
}
// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN