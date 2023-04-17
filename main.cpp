
#include <iostream>
#include <string>
#include <vector>
#include "bigint.h"
#include "test.cpp"


int main() {
    BigInteger a("994");
    BigInteger b("893");
 
    std::cout <<  a.toString()  << " ++ " <<  " = "<< (a ++).toString() << std::endl;
    std::cout <<  a.toString()  << " -- " << " = "<< (a --).toString() << std::endl;
    std::cout << " -- " << a.toString()<< " = "<< (--a).toString() << std::endl;
    std::cout << " ++ " << a.toString()<< " = "<< (++a).toString() << std::endl;
    std::cout <<  a.toString()  << " + " << b.toString()<< " = " << (a + b).toString() << std::endl;
    std::cout <<  a.toString()  << " * " << b.toString()<< " = " << (a * b).toString() << std::endl;
    std::cout <<  a.toString()  << " - " << b.toString()<< " = "<< (a - b).toString() << std::endl;
    std::cout <<  a.toString()  << " -= " << b.toString()<< " = "<< (a -= b).toString() << std::endl;
    std::cout <<  a.toString()  << " += " << b.toString()<< " = "<< (a += b).toString() << std::endl;
    testDefaultConstructor();
    testIntConstructor();
    testStringConstructor();
    testAssignmentOperator();
    testAdditionOperator();
    testSubtractionOperator();
    testMultiplicationOperator();

    cout << "All tests passed!" << endl;
    return 0;
}





