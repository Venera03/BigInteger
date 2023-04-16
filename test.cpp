#include <iostream>
#include <cassert>

#include "bigint.h"

using namespace std;
void testDefaultConstructor()
{
    BigInteger num;
    assert(num.toString() == "0");
}

void testIntConstructor()
{
    BigInteger num(123);
    assert(num.toString() == "123");

    BigInteger num2(0);
    assert(num2.toString() == "0");
}

void testStringConstructor()
{
    BigInteger num("123");
    assert(num.toString() == "123");

    BigInteger num2("00000123");
    assert(num2.toString() == "123");

    BigInteger num3("0");
    assert(num3.toString() == "0");
}

void testAssignmentOperator()
{
    BigInteger num1("123");
    BigInteger num2("456");

    num1 = num2;

    assert(num1.toString() == "456");
}

void testAdditionOperator()
{
    BigInteger num1("123");
    BigInteger num2("456");

    BigInteger sum = num1 + num2;

    assert(sum.toString() == "579");

    BigInteger num3("999");
    BigInteger num4("2");

    BigInteger sum2 = num3 + num4;

    assert(sum2.toString() == "1001");
}

void testSubtractionOperator()
{
    BigInteger num1("456");
    BigInteger num2("123");

    BigInteger diff = num1 - num2;

    assert(diff.toString() == "333");

    BigInteger num3("1001");
    BigInteger num4("2");

    BigInteger diff2 = num3 - num4;

    assert(diff2.toString() == "999");
}

void testMultiplicationOperator()
{
    BigInteger num1("123");
    BigInteger num2("456");

    BigInteger product = num1 * num2;

    assert(product.toString() == "56088");

    BigInteger num3("123456789");
    BigInteger num4("987654321");

    BigInteger product2 = num3 * num4;

    assert(product2.toString() == "121932631112635269");
}
