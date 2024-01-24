/*
    참조자 (&)
    int& a = b;
    
    - 변수의 별명 (대명사), 참조자는 새로운 변수가 아니다 (그냥 기존 변수의 별명이다. 메모리 공간이 하나 늘어나는게 아니다. 공간을 차지하지 않는다. 그러니 b의 주소가 a의 주소랑 똑같다)
    - 선언과 동시에 무조건 초기화되어야 한다 (NULL일 수가 없다)
    - 한번 초기화하면 다른 변수의 참조자가 될 수 없다
    - C++에서 새로 나온 기능, C언어에서는 제공 X
    - 스마트 포인터, 포인터, 참조자 (const pointer, 사용시에 자동으로 역참조 수행)
    - 포인터 = 메모리 주소를 담는 변수
    - "pass by reference"가 바로 이거다
*/

#include <iostream>

int main()
{
    int a = 10;
    int& b = a; // 이제 b는 a의 별명. 마치 b를 a인것마냥 사용 가능 
    
    /*
        참조자는 선언과 초기화가 동시에 일어나야 한다
        
        int &b;
        b = a; ERROR
    */
    
    a = 20;
    std::cout << a << std::endl; // 20
    std::cout << b << std::endl; // 20
    
    b = 10; // 사용할 때는 & 안붙이고 그냥 사용 (마치 b를 a인것마냥)
    std::cout << a << std::endl; // 10
    std::cout << b << std::endl; // 10
    
    std::cout << &a << std::endl;
    std::cout << &b << std::endl;
}
