#include <iostream>
#include <string>
#include <vector>
#include "bigint.h"

void BigInteger::removeLeadingZeros()
{
    while (digits.size() > 1 && digits.back() == 0)
    {
        digits.pop_back();
    }
}

BigInteger::BigInteger() {
    digits.push_back(0);
}

BigInteger::BigInteger(unsigned int n) {
    while (n > 0) {
        digits.push_back(n % 10);
        n /= 10;
    }
    if (digits.empty()) {
        digits.push_back(0);
    }
}

BigInteger::BigInteger(std::string num_str)
{

    for (int i = num_str.length() - 1; i >= 0; i--)
    {
        digits.push_back(num_str[i] - '0');
    }
}

std::string BigInteger::toString() const
{
    std::string result = "";
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        result += std::to_string(digits[i]);
    }
    return result;
}

 BigInteger BigInteger::operator=(const BigInteger &other)
    {
        digits = other.digits;
        return *this;
    }
BigInteger BigInteger::operator+(const BigInteger &other) const
{
    BigInteger result("0");
    int carry = 0;
    int i = 0;
    while (i < digits.size() || i < other.digits.size() || carry != 0)
    {
        int digit_sum = carry;
        if (i < digits.size())
        {
            digit_sum += digits[i];
        }
        if (i < other.digits.size())
        {
            digit_sum += other.digits[i];
        }
        result.digits.push_back(digit_sum % 10);
        carry = digit_sum / 10;
        ++i;
    }
    result.digits.erase(result.digits.begin());
    return result;
}

BigInteger BigInteger::operator*(const BigInteger &other) const
{
    BigInteger result("0");
    for (int i = 0; i < digits.size(); i++)
    {
        int carry = 0;
        BigInteger temp("0");
        for (int j = 0; j < other.digits.size(); j++)
        {
            int digit_product = digits[i] * other.digits[j] + carry;
            temp.digits.push_back(digit_product % 10);
            carry = digit_product / 10;
        }
        if (carry > 0)
        {
            temp.digits.push_back(carry);
        }
        for (int k = 0; k < i; k++)
        {
            temp.digits.insert(temp.digits.begin(), 0);
        }
        result = result + temp;
    }
    result.digits.erase(result.digits.begin());
    return result;
}
BigInteger BigInteger::operator-(const BigInteger &other) const
{
    BigInteger result("0");
    int borrow = 0;
    for (int i = 0; i < digits.size(); ++i)
    {
        int diff = digits[i] - borrow;
        borrow = 0;
        if (i < other.digits.size())
        {
            diff -= other.digits[i];
        }
        if (diff < 0)
        {
            diff += 10;
            borrow = 1;
        }
        result.digits.push_back(diff);
    }
    result.digits.erase(result.digits.begin());
    result.removeLeadingZeros();
    return result;
}
    BigInteger &BigInteger::operator-=(const BigInteger &other) {
    *this = *this - other;
    return *this;
}
    BigInteger  &BigInteger::operator+= (const BigInteger &other){
    *this = *this+other;
    return *this;
}

