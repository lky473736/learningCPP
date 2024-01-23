/*
    pass by address 2
    - 함수 내부에서 동적으로 할당된 메모리의 주소를 반환도 가능
*/

#include <iostream>

int* create_array (int size, int init_val = 0)
{
    int* new_storage = nullptr;
    new_storage = new int[size];
    
    for (int i = 0; i < size; i++)
    {
        *(new_storage + i) = init_val;
    }
    
    return new_storage;
}

int main()
{
    int* myarr = nullptr;
    int size = 0;
    
    std::cout << "size : ";
    std::cin >> size;
    
    myarr = create_array(size, 3);
    
    for (int i = 0; i < size; i++)
    {
        std::cout << i << " | " << myarr+i << ' ' << *(myarr+i) << std::endl;
    }
    
    delete [] myarr;
    return 0;
}
