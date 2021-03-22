#include "myfunc.h"

complex_t sub(complex_t num1, complex_t num2){
    complex_t diff;
    diff.real = (num1.real-num2.real);
    diff.imaginary = (num1.imaginary-num2.imaginary);
    return diff;
}