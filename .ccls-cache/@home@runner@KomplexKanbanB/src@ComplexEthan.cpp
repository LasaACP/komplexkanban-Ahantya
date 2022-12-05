#include <cmath>
#include "Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

Complex asech(const Complex com){
    Complex ret = acosh(pow(com,-1));
    return ret;
}

Complex Complex::rnd(int place){
    double var = re;
    double value = (int)(var * std::pow(10,place));
    var = value / 100;

    double varIm = im;
    double valueIm = (int)(varIm * std::pow(10, place));
    varIm = valueIm / 100;

    Complex com(var, varIm);
    return com;
}