/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Runn with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include "../catch_amalgamated.hpp"
#include "../../include/Complex.h"
#include "../../lib/ComplexConstructors.cpp"
#include "../../lib/Operators/ComplexSubtractionAssign.cpp"
using namespace std;

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

TEST_CASE("Catch2 Complex Addition Test", "[Addition]")
{
	
  Complex a = Complex(7, 8);
  Complex b = Complex(3, 2);
  a -= b;

  Complex c = Complex(4, 3);
  double d = 1;
  c -= d;
	
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Subtraction Assignment" << endl;
  REQUIRE(a.real == 4);
  REQUIRE(a.imaginary == 6);
  REQUIRE(c.real == 3);
  REQUIRE(c.imaginary == 3);
}
// 
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN

