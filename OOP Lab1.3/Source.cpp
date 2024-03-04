// Source.cpp
#include "LongLong.h"
#include <iostream>  

int main() {
    // ��������� ��'���� ����� LongLong
    LongLong num1, num2;

    // ����������� �� �������� �������
    std::cout << "Enter values for num1:";
    num1.Read();

    std::cout << "Enter values for num2:";
    num2.Read();

    // ��������� �������� �������
    std::cout << "num1: ";
    num1.Display();
    std::cout << "num2: ";
    num2.Display();

    // ���������� ��������
    LongLong sum = num1.add(num2);
    LongLong product = num1.multiply(num2);

    // ��������� ���������� ������������ ��������
    std::cout << "Sum: ";
    sum.Display();

    std::cout << "Product: ";
    product.Display();

    // �������� ���������
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