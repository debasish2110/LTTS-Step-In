
#include "myfunc.h"

complex_t sum(complex_t num1, complex_t num2){
    complex_t sum;
    sum.real = (num1.real + num2.real);
    sum.imaginary = (num1.imaginary + num2.imaginary);
    return sum;
}