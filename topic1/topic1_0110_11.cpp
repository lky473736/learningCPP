/*
    조건문, 반복문 (C랑 똑같다)
    
    조건문
        - if-else
        - switch
        - 조건 연산자
        
    제어문
        - continue
        - break
        - return
        - goto
        
    반복문
        - for
        - while 
        - do-while
*/

#include <iostream>

int main()
{
    int expr = 1;
    
    if (expr)
    {
        int a = 0;
    }
    
    std::cout << a; // 에러임. a는 블록 (scope) 내 선언된 auto 변수
}
