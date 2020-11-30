// Copyright 2020 Kartseva Marya
#include"Fraction.h"
#include <string>
int main() {
    Fraction a1;	
    if (!a1.getNumerator()) std::cout << "Test 1.1 true" << std::endl;
    if (a1.getDenominator() == 1) std::cout << "Test 1.2 true" << std::endl;
    Fraction a2(1, 2);
    if (a2.getNumerator() == 1) std::cout << "Test 2.1 true" << std::endl;
    if (a2.getDenominator() == 2) std::cout << "Test 2.2 true" << std::endl;
    Fraction a3(1, 2);
    Fraction b3(a3);
    if (a3.getNumerator() == 1) std::cout << "Test 3.1 true" << std::endl;
    if (a3.getDenominator() == 2) std::cout << "Test 3.2 true" << std::endl;
    Fraction a4(1, 2);
    Fraction b4(a4);
    Fraction c4;
    c4 = a4 + b4;
    if (c4.getNumerator() == 1) std::cout << "Test 4.1 true" << std::endl;
    if (c4.getDenominator() == 1) std::cout << "Test 4.2 true" << std::endl;
    Fraction a5(1, 2);
    Fraction b5(-1, 2);
    Fraction c5;
    c5 = a5 + b5;
    if (c5.getNumerator() == 0) std::cout << "Test 5.1 true" << std::endl;
    if (c5.getDenominator() == 1) std::cout << "Test 5.2 true" << std::endl;
    Fraction a6(1, 2);
    Fraction b6(1, 2);
    Fraction c6;
    c6 = a6 - b6;
    if (c6.getNumerator() == 0) std::cout << "Test 6.1 true" << std::endl;
    if (c6.getDenominator() == 1) std::cout << "Test 6.2 true" << std::endl;
    Fraction a7(1, 3);
    Fraction b7(2, 3);
    Fraction c7;
    c7 = a7 + b7;
    if (c7.getNumerator() == 1) std::cout << "Test 7.1 true" << std::endl;
    if (c7.getDenominator() == 1) std::cout << "Test 7.2 true" << std::endl;
    Fraction a8(1, 2);
    Fraction b8(1, 2);
    Fraction c8;
    c8 = a8 * b8;
    if (c8.getNumerator() == 1) std::cout << "Test 8.1 true" << std::endl;
    if (c8.getDenominator() == 4) std::cout << "Test 8.2 true" << std::endl;
    Fraction a9(1, 5);
    Fraction b9(1, 2);
    Fraction c9;
    c9 = a9 / b9;
    if (c9.getNumerator() == 2) std::cout << "Test 9.1 true" << std::endl;
    if (c9.getDenominator() == 5) std::cout << "Test 9.2 true" << std::endl;
}
