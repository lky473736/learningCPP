// miniproj 2. binary search
// 동적 배열 할당 : https://ansohxxn.github.io/cpp/chapter6-11/

#include <iostream>
#define SIZE 100;

int binary_search(int num_for_find, int *arr, int counting); // prototype of function

int main()
{
    int num_for_find;
    int counting = 0; 
    
    int compo;
    
    std::cout << "counting? : ";
    std::cin >> counting;
    
    int *arr = new int[counting];
    
    std::cout << "input the num here" << std::endl;
    
    for (int i = 0; i < counting; i++)
    {
        std::cin >> compo;
        arr[i] = compo;
    }
    
    std::cout << "num_for_find? : ";
    std::cin >> num_for_find;
    
    std::cout << binary_search(num_for_find, arr, counting) << std::endl;
}

int binary_search(int num_for_find, int *arr, int counting)
{
    int start = 1;
    int end = counting;
    int mid;
    
    while (start <= end)
    {
        mid = (start + end) / 2;
        
        if (num_for_find == arr[mid-1])
        {
            return mid;
        }
        
        else 
        {
            if (num_for_find < arr[mid-1])
            {
                end = mid - 1;
            }
            
            else 
            {
                start = mid + 1;
            }
        }
    }
    
    return -1;
}
