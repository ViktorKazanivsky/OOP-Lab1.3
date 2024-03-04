// Source.cpp
#include "LongLong.h"
#include <iostream>  

int main() {
    // Створення об'єктів класу LongLong
    LongLong num1, num2;

    // Ініціалізація та введення значень
    std::cout << "Enter values for num1:";
    num1.Read();

    std::cout << "Enter values for num2:";
    num2.Read();

    // Виведення введених значень
    std::cout << "num1: ";
    num1.Display();
    std::cout << "num2: ";
    num2.Display();

    // Арифметичні операції
    LongLong sum = num1.add(num2);
    LongLong product = num1.multiply(num2);

    // Виведення результатів арифметичних операцій
    std::cout << "Sum: ";
    sum.Display();

    std::cout << "Product: ";
    product.Display();

    // Операції порівняння
    if (num1.lessThan(num2)) {
        std::cout << "num1 is less than num2";
    }
    else if (num1.notLessThan(num2)) {
        std::cout << "num1 is not less than num2";
    }

    if (num1.greaterThan(num2)) {
        std::cout << "num1 is greater than num2";
    }

    return 0;
}