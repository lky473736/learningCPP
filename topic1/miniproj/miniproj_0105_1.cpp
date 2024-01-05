// miniproj1. 구구단 만들기

#include <iostream>

int main()
{
    // 1) 이중 중첩 반복문
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            std::cout << i+1 << " * " << j+1 << " == " << (i+1) * (j+1) << std::endl;
        }
        std::cout << "---------" << std::endl;
    }
    
    printf ("================================\n");
    
    // 2) 배열과 포인터 사용
    int arr[9][9];
    int *p;
    
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }
    
    for (int i = 0; i < 9; i++)
    {
        p = arr[i];
        
        for (int j = 0; j < 9; j++)
        {
            std::cout << i+1 << " * " << j+1 << " == " << *(p+j) << std::endl;
        }
        
        std::cout << "---------" << std::endl;
    }
}
