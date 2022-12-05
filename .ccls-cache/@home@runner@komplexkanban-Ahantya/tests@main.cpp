/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Runn with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include "catch_amalgamated.hpp"
#include "../src/fac.h"
using namespace std;

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN

int main( int argc, char* argv[] ) {
  // global setup...

  int result = Catch::Session().run( argc, argv );

  // global clean-up...
    cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else    //Not CATCH_AMALGAMATED_CUSTOM_MAIN

TEST_CASE("Quick Catch2 test on Factorial", "[Factorial]")
{

  /*cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Factorial" << endl;
  REQUIRE(Factorial(1) == 1);
  REQUIRE(Factorial(2) == 2);
  REQUIRE(Factorial(3) == 6);
  REQUIRE(Factorial(4) == 24);
  REQUIRE(Factorial(5) == 120);*/
  cout << "hello";
}

/*TEST_CASE("Catch2 Complex Addition Test", "[Addition]")
{
	
  Complex a = Complex(1, 2);
  Complex b = Complex(3, 4);
  int c = 5;
	
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Addition" << endl;
  REQUIRE((a + b).real == 4);
  REQUIRE((a + b).imaginary == 6);
  REQUIRE((b + a).real == 4);
  REQUIRE((b + a).imaginary == 6);
  REQUIRE((a + c).real == 6);
  REQUIRE((a + c).imaginary == 2);	
}*/
// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN
