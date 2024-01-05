/*
    메모리 : 읽고 쓸 수 있는 바이트의 집합 (비트의 집합)
    메모리 == 칸이 나눠진 커다란 메모장, 근데 hex만 씀
    address == 각 칸의 주소 (어드레스와 포인터)
    메모리는 실질적으로 각 칸에 1바이트의 데이터 저장 가능
    
    7대 자료형
        - int : 정수형, 4바이트(32비트)
        - short : 정수형, 2바이트(16비트)
        - long : 정수형, 4바이트(32비트)
        - char : 문자형, 1바이트(8비트)
        - float : 실수형, 4바이트(32비트)
        - double : 실수형, 8바이트(64비트)
        - unsigned : 부호없음
        
    bit : 2진수로 표현 가능한 가장 작은 단위 (0, 1)
    byte : 8bit, 한 글자
    hex : 16진법. 16진수는 앞에 0x 붙임. 한 자리가 4비트짜리
    보통은 16진수 2개로 1바이트를 보기 쉽게 표현하기 위해 hex 사용
    ex) 0x0001 == 10진수로 1
    ex) 0x12 == 10진수로 18
    */
    
#include <iostream>

int main()
{
    int a = 1; 
    /*int : 8바이트, 메모리에 저장될 때 각 칸이 1바이트씩이라
    00
    00
    00
    01
    이렇게 저장됨. 근데 이건 너무 많이 작성해야 하니깐 귀찮음.
    그냥 메모리 구조에 바로 1이라 작성한 후 주소 표기하는 것이 일반적.
    */
    std::cout << "a = " << a;
}