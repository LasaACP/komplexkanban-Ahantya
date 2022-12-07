#include "../../include/Complex.h"

#include <cmath>

Complex sin(const Complex other) {
  double firsthalf = sin(other.real) + cosh(other.imaginary);
  double secondhalf = cos(other.real) + sinh(other.imaginary);
  return firsthalf + secondhalf;
}
