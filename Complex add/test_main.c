#include <stdio.h>
#include "myfunc.h"
#include "unity.h"

static complex_t a;
static complex_t b;
static complex_t res;
/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_zero(void)
{
    /* FOR ADDITION */
    a.real = 0;
    a.imaginary = 0;
    b.real = 0;
    b.imaginary = 0;
    res=sum(a, b);
    TEST_ASSERT_EQUAL(0, res.real);
    TEST_ASSERT_EQUAL(0, res.imaginary);

    /* FOR SUBTRACTION */
    a.real = 0;
    a.imaginary = 0;
    b.real = 0;
    b.imaginary = 0;
    res=sub(a, b);
    TEST_ASSERT_EQUAL(0, res.real);
    TEST_ASSERT_EQUAL(0, res.imaginary);

    /* FOR MULTIPLICATION */
    a.real = 0;
    a.imaginary = 0;
    b.real = 0;
    b.imaginary = 0;
    res=mul(a, b);
    TEST_ASSERT_EQUAL(0, res.real);
    TEST_ASSERT_EQUAL(0, res.imaginary);

    /* FOR DIVISION */
    a.real = 0;
    a.imaginary = 0;
    b.real = 0;
    b.imaginary = 0;
    res=div(a, b);
    TEST_ASSERT_EQUAL(0, res.real);
    TEST_ASSERT_EQUAL(0, res.imaginary);

}
void test_positive(void)
{
    /* FOR ADDITION */
    a.real = 25;
    a.imaginary = 15;
    b.real = 75;
    b.imaginary = 95;
    res=sum(a, b);
    TEST_ASSERT_EQUAL(100, res.real);
    TEST_ASSERT_EQUAL(110, res.imaginary);

    /* FOR SUBTRACTION */
    a.real = 25;
    a.imaginary = 15;
    b.real = 10;
    b.imaginary = 5;
    res=sub(a, b);
    TEST_ASSERT_EQUAL(15, res.real);
    TEST_ASSERT_EQUAL(10, res.imaginary);

    /* FOR MULTIPLICATION */
    a.real = 2;
    a.imaginary = 1;
    b.real = 4;
    b.imaginary = 3;
    res=mul(a, b);
    TEST_ASSERT_EQUAL(5, res.real);
    TEST_ASSERT_EQUAL(10, res.imaginary);

    /* FOR DIVISION */
    a.real = 2;
    a.imaginary = 1;
    b.real = 4;
    b.imaginary = 3;
    res=div(a, b);
    TEST_ASSERT_EQUAL(0.4, res.real);
    TEST_ASSERT_EQUAL(-0.1, res.imaginary);
}

void test_negative(void)
{
    /* FOR ADDITION */
    a.real = -25;
    a.imaginary = -15;
    b.real = 75;
    b.imaginary = 95;
    res=sum(a, b);
    TEST_ASSERT_EQUAL(50, res.real);
    TEST_ASSERT_EQUAL(80, res.imaginary);

    a.real = -25;
    a.imaginary = -15;
    b.real = -75;
    b.imaginary = -95;
    res=sum(a, b);
    TEST_ASSERT_EQUAL(-100, res.real);
    TEST_ASSERT_EQUAL(-110, res.imaginary);

    /* FOR SUBTRACTION */
    a.real = -25;
    a.imaginary = -15;
    b.real = 75;
    b.imaginary = 95;
    res=sub(a, b);
    TEST_ASSERT_EQUAL(-100, res.real);
    TEST_ASSERT_EQUAL(-110, res.imaginary);

    a.real = -25;
    a.imaginary = -15;
    b.real = -75;
    b.imaginary = -95;
    res=sub(a, b);
    TEST_ASSERT_EQUAL(50, res.real);
    TEST_ASSERT_EQUAL(80, res.imaginary);

    /* FOR MULTIPLICATION */
    a.real = -2;
    a.imaginary = -1;
    b.real = 4;
    b.imaginary = 3;
    res=mul(a, b);
    TEST_ASSERT_EQUAL(-5, res.real);
    TEST_ASSERT_EQUAL(-10, res.imaginary);

    a.real = -2;
    a.imaginary = -1;
    b.real = -4;
    b.imaginary = -3;
    res=mul(a, b);
    TEST_ASSERT_EQUAL(5, res.real);
    TEST_ASSERT_EQUAL(10, res.imaginary);

    /* FOR DIVISION */
    a.real = -2;
    a.imaginary = -1;
    b.real = 4;
    b.imaginary = 3;
    res=div(a, b);
    TEST_ASSERT_EQUAL(-0.4, res.real);
    TEST_ASSERT_EQUAL(0.1, res.imaginary);

    a.real = -2;
    a.imaginary = -1;
    b.real = -4;
    b.imaginary = -3;
    res=div(a, b);
    TEST_ASSERT_EQUAL(0.4, res.real);
    TEST_ASSERT_EQUAL(-0.1, res.imaginary);

}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_zero);
    RUN_TEST(test_positive);
    RUN_TEST(test_negative);

    /* Close the Unity Test Framework */
    return UNITY_END();
}