#include <iostream>

bool isMultiple(int, int);

int main() {
    int a, b;
    
    std::cin >> a >> b;

    if (isMultiple (a, b) == true) 
    {
        std::cout << "Yes" << std::endl;
    }
    else 
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}

bool isMultiple(int a, int b)
{
    if (b % a == 0) {
        return true;
    }

    return false;
}
