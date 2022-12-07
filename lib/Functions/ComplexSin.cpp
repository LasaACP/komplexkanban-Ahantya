#include "../../include/Complex.h"

#include <cmath>

Complex sin(const complex) {
  double firsthalf = sin(complex.real) + cosh(complex.imaginary);
  double secondhalf = cos(complex.real) + sinh(complex.imaginary);
  return firsthalf + secondhalf;
}
