// pass by reference 연습

#include <iostream>

void exchange_the_val (int &a, int &b);

int main()
{
    int a = 10;
    int b = 0;
    exchange_the_val (a, b);
    
    std::cout << a << ' ' << b << std::endl;
    
    return 0;
}

void exchange_the_val (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
