#ifndef BIGINT_H
#define BIGINT_H
#include <iostream>
#include <string>
#include <vector>
 
 class BigInteger {
private:
    std::vector<int> digits;
    void removeLeadingZeros();
public:
    BigInteger();
    BigInteger(unsigned int n);
    BigInteger(std::string num_str);
    std::string toString() const;
    BigInteger operator=(const BigInteger &other);
    BigInteger& operator++();
    BigInteger operator++(int);
    BigInteger& operator--();
    BigInteger operator--(int);
    BigInteger& operator-= (const BigInteger &other);
    BigInteger& operator+= (const BigInteger &other);
    BigInteger operator+(const BigInteger& other) const;
    BigInteger operator*(const BigInteger& other) const;
    BigInteger operator-(const BigInteger& other) const;
};
#endif