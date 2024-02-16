#include <iostream>

int main()
{
    int a = 10, b = 20;
    b = ++a;
    std::cout << a << ' ' << b << std::endl; // 11, 11
    
    a = 10;
    b = 20;
    a = (a > b) ? 3 : -3;
    std::cout << a << ' ' << b << std::endl; // -3, 20

    a = 10;
    b = 20;
    a = a + b % 3 + 4;
    std::cout << a << ' ' << b << std::endl; // 10, 16

    a = 10;
    b = 20;
    b >>= 2;
    std::cout << a << ' ' << b << std::endl; // 10, 5
}