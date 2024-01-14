/*  
    function call stack
    - 함수 호출의 동작 방식
    - LIFO (Last In First Out)
    
    - stack frame (activation record)
        - 함수의 호출이 발생할 때마다 일종의 '구분선'이 생성
        - 함수의 지역 변수와 매개변수는 그 구분선 내에 생성
        - 함수의 호출이 끝나면 구분선 내의 메모리가 자동으로 해제 
*/

/*
    메모리 구조
    - 코드 공간
    - static 변수, 전역 변수, string 리터럴...
    - 스택 메모리 (빠르지만 작음, 메모리가 자동으로 정리)
    - 힙 메모리 (크지만 느림, 메모리를 직접 해제해줘야함 (free, malloc...))
*/

#include <iostream>

int func2(int x, int y, int z)
{
    x += y + z; // 30 + 10 + 20 == 60
    return x; // 60
}

int func1(int a, int b)
{
    int rst;
    rst = a + b; // 30
    rst = func2(rst, a, b); // 30, 10, 20
    return rst; // 60
}

int main()
{
    int x = 10;
    int y = 20;
    int z;
    z = func1(x, y); // 60
    
    std::cout << z << std::endl; // 60
    
    return 0;
}
