/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Runn with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include "../catch_amalgamated.hpp"
#include "../include/Complex.h"
#include "../lib/ComplexConstructors.cpp"

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

TEST_CASE("Quick Catch2 test on Subtraction", "[Subtraction]")
{
  Complex temp1 = Complex(1, 3);
  Complex temp2 = Complex(2, 4);
  double temp3 = 5;
  Complex ans1 = Complex(-1, -1);
  Complex ans2 = Complex(1, 1);
  Complex ans3 = Complex(-4, 3);
  Complex ans4 = Complex(-3, 4);
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Subtraction" << endl;
  REQUIRE((temp1 - temp2) == ans1);
  REQUIRE((temp2 - temp1) == ans2);
  REQUIRE((temp1 - temp1) == 0);
  REQUIRE((temp1 - temp3) == ans3);
  REQUIRE((temp2 - temp3) == ans4);

}
// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN
