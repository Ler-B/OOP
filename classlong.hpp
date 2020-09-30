#pragma once
#include <iostream>

namespace Long 
{
    class Long {
    private:
        unsigned int field1;
        unsigned int field2;
    public:
        Long();
        Long(const unsigned long long a);
        Long(const unsigned int a, const unsigned int b);
        ~Long();
        const Long operator=(const unsigned long long a);
        void Print();
        const Long operator+(const Long &b);
        bool operator>(const Long &b) const;
        bool operator<(const Long &b) const;
        bool operator==(const Long &b) const;
        const Long operator-(const Long &b);
        const Long Multiplication_without_longlong(const Long &b);
        const Long operator*(const Long &b);
        const Long Division_without_longlong(const Long &b);
        const Long operator/(const Long &b);
        const Long RemainderOfDivision_without_longlong(const Long &b);
        const Long operator%(const Long &b);
        friend std::ostream& operator<<(std::ostream &os, const Long& b);
    };
    
}