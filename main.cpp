#include "classlong.hpp"
#include <iostream>

int main() {
    unsigned long long a;
    unsigned long long b;
    while(std::cin >> a >> b) {
        Long::Long a3(a), b3(b);
        std::cout << "СУММА:" << std::endl;
        Long::Long rez(a3 + b3);
        std::cout << a3 << " + " << b3 << " = " << rez << std::endl;
        std::cout << "РАЗНОСТЬ:" << std::endl;
        rez = a3 - b3;
        std::cout << a3 << " - " << b3 << " = " << rez << std::endl;
        std::cout << "ПРОИЗВЕДЕНИЕ:" << std::endl;
        rez = a3 * b3;
        std::cout << a3 << " * " << b3 << " = " << rez << std::endl;
        Long::Long temp = a3;
        std::cout << "Подcчет произведения, без использования unsigned long long:" << temp.Multiplication_without_longlong(b3) << std:: endl;
        std::cout << "ЦЕЛОЧИСЛЕННОЕ ДЕЛЕНИЕ:" << std::endl;
        rez = a3 / b3;
        std::cout << a3 << " / " << b3 << " = " << rez << std::endl;
        temp = a3;
        std::cout << "Подcчет деления, без использования unsigned long long:" << temp.Division_without_longlong(b3) << std:: endl;
        std::cout << "ОСТАТОК ОТ ДЕЛЕНИЯ:" << std::endl;
        rez = a3 % b3;
        std::cout << a3 << " % " << b3 << " = " << rez << std::endl;
        temp = a3;
        std::cout << "Подcчет ост. от деления, без использования unsigned long long:" << temp.RemainderOfDivision_without_longlong(b3) << std:: endl;
        std::cout << "ОТНОШЕНИЕ ЧИСЕЛ:" << std::endl;
        if (a3 > b3) { std::cout << a3 << " > " << b3 << std::endl; }
        if (a3 < b3) { std::cout << a3 << " < " << b3 << std::endl; }
        if (a3 == b3) { std::cout << a3 << " = " << b3 << std::endl; }
        std::cout << std::endl;
    }
}