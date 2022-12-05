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
#include "../../lib/Operators/ComplexDivision.cpp"

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN

int main( int argc, char* argv[] ) {
  // global setup...

  int result = Catch::Session().run( argc, argv );

  // global clean-up...
    cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else    //Not CATCH_AMALGAMATED_CUSTOM_MAIN

TEST_CASE("Catch2 Complex Division Test", "[Division]")
{
  Complex a = Complex(1, 2);
  Complex b = Complex(4, 5);
	
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Addition" << endl;
  REQUIRE((a / b).real == 0.25);
  REQUIRE((a / b).imaginary == 0.4);
  REQUIRE((b / a).real == 0.25);
  REQUIRE((b / a).imaginary == 0.4);
}
// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN
