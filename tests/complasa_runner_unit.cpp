#include <cstdlib>
#include <iostream>
#include <cmath>
#include <climits>
#include "../include/Complex.h"

#include "../tests/catch_amalgamated.hpp"
#include "../lib/ComplexConstructors.cpp"
//Operators
#include "../lib/Operators/ComplexAddition.cpp"
#include "../lib/Operators/ComplexAdditionAssign.cpp"
#include "../lib/Operators/ComplexDivision.cpp"
#include "../lib/Operators/ComplexDivisionAssign.cpp"
#include "../lib/Operators/ComplexEqualityOperator.cpp"
#include "../lib/Operators/ComplexInequality.cpp"
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
#include "../lib/Functions/ComplexCos.cpp"
#include "../lib/Functions/ComplexLog.cpp"
#include "../lib/Functions/ComplexSin.cpp"
#include "../lib/Functions/ComplexExp.cpp"
#include "../lib/Functions/ComplexNorm.cpp"

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
  
  Complex a(3.0,4.0),b(2.0, 3.0);
  double c = 4;

  CHECK((a + b).real == 5.0);
  CHECK((a + b).imaginary == 7.0);

  CHECK((a - b).real == 1.0);
  CHECK((a - b).imaginary == 1.0);

  CHECK((a / b).real - 1.3846153846 < 0.000001);
  CHECK((a / b).imaginary - -0.0769231 < 0.000001);

  CHECK((a * b).real == -6);
  CHECK((a * b).imaginary == 17);
  
  a += b;
  CHECK(a.real == 5.0);
  CHECK(a.imaginary == 7.0);
  
  a -= b;
  CHECK(a.real == 3.0);
  CHECK(a.imaginary == 4.0);
  
  a /= b;
  CHECK(a.real - 1.38462 < 0.000001);
  CHECK(a.imaginary - -0.0769231 < 0.000001);
  
  a *= b;
  CHECK(a.real == 3.0);
  CHECK(a.imaginary - 4.0 < 0.00001);

  CHECK(abs(a) == 5);
  

  CHECK(!(a == b));

  CHECK(!(a == c));

  CHECK(a != b);

  CHECK(a != c);
  
  CHECK(conj(a).real == 3.0);
  CHECK(conj(a).imaginary - -4.0 < 0.0001);
  
  CHECK(arg(a) - 0.927295 < 0.000001);
  
  CHECK(polar(5.39, 0.38).real == 5.0);
  CHECK(polar(5.39, 0.38).imaginary == 2.0);
  
  CHECK(norm(a) == 25.0);

  CHECK(exp(a).real - -13.1288 < 0.0001);
  CHECK(exp(a).imaginary - -15.2008 < 0.0001);

  CHECK(sqrt(a).real == 2.0);
  CHECK(sqrt(a).imaginary == 1.0);
  
  CHECK(log(a).real - 1.609438 < 0.0001);
  CHECK(log(a).imaginary - 0.927295 < 0.0001);
  
  CHECK(sin(a).real - 3.85374 < 0.00001);
  CHECK(sin(a).imaginary - -27.0168 < 0.0001);

  CHECK(cos(a).real - -27.0349 < 0.00001);
  CHECK(cos(a).imaginary - 3.85115 < 0.00001);

  CHECK(real(a) == 3.0);

  CHECK(pow(a, 2.7).real - -61.9618 < 0.00001);
  CHECK(pow(a, 2.7).imaginary - 45.9309 < 0.0001);

  CHECK(pow(2.7, a).real - -13.263 < 0.001);
  CHECK(pow(2.7, a).imaginary - -14.5435 < 0.0001);

  CHECK(pow(a, b).real - 1.42601 < 0.0001);
  CHECK(pow(a, b).imaginary - 0.602435 < 0.00001);

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