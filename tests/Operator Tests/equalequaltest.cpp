/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Runn with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include "../catch_amalgamated.hpp"
#include "../../include/Complex.h"
#include "../../lib/ComplexConstructors.cpp
#include "../../lib/Operators/ComplexAddition.cpp"
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

TEST_CASE("Quick Catch2 test on EqualEquals", "[EqualEqual]")
{
  Complex temp1 = Complex(1, 3);
  Complex temp2 = Complex(1, 3);
  double temp3 = 5;
  Complex temp4 = Complex(5, 0);
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on EqualEqual" << endl;
  REQUIRE((temp1 == temp2) == true);
  REQUIRE((temp1 == temp3) == false);
  REQUIRE((temp2 == temp4) == false);
  REQUIRE((temp3 == temp4) == true);
}
// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN
