#include "myfunc.h"

complex_t mul(complex_t num1, complex_t num2){
    complex_t result;
    result.real = num1.real*num2.real - num1.imaginary*num2.imaginary;
    result.imaginary= num1.imaginary*num2.real + num1.real*num2.imaginary;
    return result;
}