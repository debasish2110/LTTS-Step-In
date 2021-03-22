#include<stdio.h>
#include<conio.h>
#include "addition.c"
#include "substraction.c"
#include "multiplication.c"
#include "division.c"


int main(){
    complex_t number1, number2, result;
    number1.real=7;
    number1.imaginary=-6;
    number2.real=2;
    number2.imaginary=-3;

    result=sum(number1, number2);
    printf("addition of both number is: %f %fi\n",result.real, result.imaginary);

    result=sub(number2, number2);
    printf("substraction of both number is: %f %fi\n",result.real, result.imaginary);
    
    result=mul(number1, number2);
    printf("multiplication of both number is: %f %fi\n",result.real, result.imaginary);
    
    result=div(number1, number2);
    printf("division of both number is: %f %fi",result.real, result.imaginary);

    return 0;
}