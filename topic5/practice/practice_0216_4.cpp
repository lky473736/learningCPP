#include <iostream>

int main() 
{
    double a[5];
    double sum;
    
    for (int i = 0; i < 5; i++)
    {
        std::cin >> a[i];
        sum += a[i];
    }

    std::cout << *(a) << ' ' << *(a + 1) << ' ' << *(a + 2) << ' ' << *(a + 3) << ' ' << *(a + 4) << "의 평균 = " << sum / 5 << std::endl;
}