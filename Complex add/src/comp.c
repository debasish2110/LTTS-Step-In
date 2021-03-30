
#include "myfunc.h"

complex_t sum(complex_t num1, complex_t num2){
    complex_t sum;
    sum.real = (num1.real + num2.real);
    sum.imaginary = (num1.imaginary + num2.imaginary);
    return sum;
}
complex_t div(complex_t num1, complex_t num2){
    complex_t result;
    if(num2.real==0 && num2.imaginary==0)
    {
        result.real=0;
        result.imaginary=0;
        return result;
    }
    result.real = (num1.real * num2.real + num1.imaginary * num2.imaginary) / ( num2.real * num2.real + num2.imaginary * num2.imaginary);
    result.imaginary = (num1.imaginary* num2.real - num1.real * num2.imaginary) / (num2.real * num2.real + num2.imaginary * num2.imaginary);
    return result;
}

complex_t mul(complex_t num1, complex_t num2){
    complex_t result;
    result.real = num1.real*num2.real - num1.imaginary*num2.imaginary;
    result.imaginary= num1.imaginary*num2.real + num1.real*num2.imaginary;
    return result;
}

complex_t sub(complex_t num1, complex_t num2){
    complex_t diff;
    diff.real = (num1.real-num2.real);
    diff.imaginary = (num1.imaginary-num2.imaginary);
    return diff;
}

