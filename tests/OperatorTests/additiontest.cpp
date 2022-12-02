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
#include "../../lib/Operators/ComplexAddition.cpp"
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
}
// 
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN

