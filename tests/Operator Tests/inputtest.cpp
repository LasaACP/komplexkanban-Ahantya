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
#include "../../lib/Operators/ComplexInput.cpp"
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

TEST_CASE("Catch2 Complex Input Test", "[Input]")
{
	
  Complex a;

  //input: real = 3.5, imaginary = 5.3 -> (3, 5)
  cout << "Enter complex: ";
  cin >> a;
	
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Input" << endl;
  REQUIRE(a.real == 3.5);
  REQUIRE(a.imaginary == 5.3);
}
// 
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN

