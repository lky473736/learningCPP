/*
    포인터의 반환
    - 인자로 전달된 데이터를 반환 가능
*/

#include <iostream>

int* print_add_bigger (int* ptr1, int* ptr2);

int main()
{
    int* ptr1 = nullptr;
    int* ptr2 = nullptr;
    int a = 10;
    int b = 15;

    ptr1 = &a;
    ptr2 = &b;

    std::cout << *print_add_bigger(ptr1, ptr2);
}

int* print_add_bigger (int* ptr1, int* ptr2)
{
    if (*ptr1 > *ptr2) 
    {
        return ptr1;
    }
    return ptr2;
}