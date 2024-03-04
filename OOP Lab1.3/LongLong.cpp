// LongLong.cpp
#include "LongLong.h"
#include <iostream>

LongLong::LongLong() : highPart(0), lowPart(0) {}

LongLong::LongLong(long high, long low) : highPart(high), lowPart(low) {}

long LongLong::getHighPart() const {
    return highPart;
}

long LongLong::getLowPart() const {
    return lowPart;
}

void LongLong::setHighPart(long high) {
    highPart = high;
}

void LongLong::setLowPart(long low) {
    lowPart = low;
}

LongLong LongLong::add(const LongLong& other) const {
    LongLong result;
    result.setHighPart(highPart + other.getHighPart());
    result.setLowPart(lowPart + other.getLowPart());
    return result;
}

LongLong LongLong::multiply(const LongLong& other) const {
    LongLong result;

    long a = highPart;
    long b = lowPart;
    long c = other.getHighPart();
    long d = other.getLowPart();

    result.setHighPart(a * c);
    result.setLowPart(b * d);

    return result;
}

bool LongLong::lessThan(const LongLong& other) const {
    return (highPart < other.getHighPart()) ||
        ((highPart == other.getHighPart()) && (lowPart < other.getLowPart()));
}

bool LongLong::notLessThan(const LongLong& other) const {
    return !lessThan(other);
}

bool LongLong::greaterThan(const LongLong& other) const {
    return (highPart > other.getHighPart()) ||
        ((highPart == other.getHighPart()) && (lowPart > other.getLowPart()));
}

void LongLong::Init(long upper, long lower) {
    setHighPart(upper);
    setLowPart(lower);
}

void LongLong::Read() {
    long upperPart, lowerPart;
    std::cout << "Enter upper part: ";
    std::cin >> upperPart;
    std::cout << "Enter lower part: ";
    std::cin >> lowerPart;
    Init(upperPart, lowerPart);
}

void LongLong::Display() const {
    std::cout << "High part: " << highPart << ", Low part: " << lowPart << "\n";
}

std::string LongLong::toString() const {
    return std::to_string(highPart) + " " + std::to_string(lowPart);
}