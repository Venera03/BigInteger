#include <iostream>
#include <string>
#include <vector>
#include "bigint.h"


int main() {
    BigInteger a("994");
    BigInteger b("893");
 
    std::cout <<  a.toString()  << " + " << b.toString()<< " = " << (a + b).toString() << std::endl;
    std::cout <<  a.toString()  << " * " << b.toString()<< " = " << (a * b).toString() << std::endl;
    std::cout <<  a.toString()  << " - " << b.toString()<< " = "<< (a - b).toString() << std::endl;
    std::cout <<  a.toString()  << " -= " << b.toString()<< " = "<< (a -= b).toString() << std::endl;
    std::cout <<  a.toString()  << " += " << b.toString()<< " = "<< (a += b).toString() << std::endl;
    return 0;
}






