// LongLong.h
#pragma once
#include <string>

class LongLong {
private:
    long highPart;
    long lowPart;

public:
    LongLong();
    LongLong(long high, long low);

    long getHighPart() const;
    long getLowPart() const;
    void setHighPart(long high);
    void setLowPart(long low);

    bool lessThan(const LongLong& other) const;
    bool notLessThan(const LongLong& other) const;
    bool greaterThan(const LongLong& other) const;

    void Init(long upper, long lower);
    void Read();
    LongLong add(const LongLong& other) const;
    LongLong multiply(const LongLong& other) const;

    void Display() const;
    std::string toString() const;
};