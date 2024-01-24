// 참조자가 함수의 parameter가 되는 pass by reference

#include <iostream>

void increment (int val)
{
    val++; // 받아온 parameter의 값을 증가
} // brace 벗어나면 val 없어짐 (지역변수, auto)

void increment_by_reference (int &val) // pass by reference
{
    val++; // val 주소의 값에 1 증가
}

void increment_by_pointer (int *val) // pass by address
{
    *val = *val + 1;
}

int main()
{
    int a = 10;
    
    increment(a);
    std::cout << a << std::endl;
    
    increment_by_reference(a);
    std::cout << a << std::endl;
    
    increment_by_pointer(&a);
    std::cout << a << std::endl;
    
    return 0;
}
