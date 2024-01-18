#include <iostream>

int main()
{
    int *p; // 포인터 p 선언 (초기화를 안해주었기 때문에 쓰레기값 저장)
    
    std::cout << "value : " << p << std::endl; // 쓰레기값 출력
    std::cout << "address : " << &p << std::endl; // 쓰레기값 담은 포인터의 주소를 출력
    std::cout << "size : " << sizeof(p) << std::endl; // 포인터의 사이즈
    
    p = nullptr; // nullptr로 쓰레기값 X (0으로 초기화)
    
    std::cout << "----------" << std::endl;
    
    std::cout << "value : " << p << std::endl; // 0
    std::cout << "address : " << &p << std::endl; // 포인터의 주소는 달라지지 않는다
    std::cout << "size : " << sizeof(p) << std::endl; // 포인터의 사이즈도 달라지지 않는다
}

/*
    - 포인터 변수의 크기는 시스템에 따라 다르다
    - 일반적으로 32비트 시스템에서는 4바이트, 64비트 시스템에서는 8바이트
*/
