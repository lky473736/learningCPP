/*
    pass by address 
    - 포인터도 변수이기 때문에 함수의 parameter로 전달이 가능
    - 변수의 주소를 전달
*/

#include <iostream>

// pass by reference vs pass by address
void double_data (int *int_ptr) // 주소값을 받는다
{
    *int_ptr *= 2; // int_ptr의 주소가 가리키는 값을 2 곱해라
}

int main()
{
    int value = 10;
    std::cout << value << std::endl; // 10

    double_data (&value);

    std::cout << value << std::endl; // 20

    return 0;
}