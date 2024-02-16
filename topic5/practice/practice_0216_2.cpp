#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    
    if (b % a == 0) {
        std::cout << "Yes";
    }

    else {
        std::cout << "No";
    }

    return 0;
}