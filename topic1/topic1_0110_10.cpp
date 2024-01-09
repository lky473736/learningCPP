/*
    표현식 : 모든 언어의 명령단위
    명령문 : 모든 언어의 문장단위 (명령문 단위로 프로그램 실행)
    대부분 C와 동일한 체계를 지닌다.
*/

/*
    연산자 : C언어와 거의 똑같다 (unary, binary, ternary)
    - operater는 operand를 서로 연산시킴
    - operand의 갯수에 따라 unary, binary, ternary로 구분 (이산수학)
    - unary operater : 부정 연산자, 비트 연산자, 증감 연산자
    - binary operator : 대입 연산자, 논리 연산자, 사칙연산, 쉬프트 연산자
    - ternary operator : 조건 연산자
*/

#include <iostream>

int main()
{
    int expr1 = 1;
    int expr2 = 0;
    int expr3 = 0;
    
    /*
        short circuit evaluation
        c++은 최적화를 위해서 만약 결과 파악이 가능한 경우 바로 연산을 종료하는 기능을 가짐
        
        예를 들어서 30번째줄에 expr2를 연산하는 순간 조건이 위배되기 때문에 expr3을 추가적으로 연산하지 않음
        또한 37번째줄에 expr1을 연산하는 순간 이미 조건을 만족했기 때문에 그 이후를 추가적으로 연산하지 않음
    */
    
    if (expr1 && expr2 && expr3) 
    {
        std::cout << "and activated";
    }
    
    if (expr1 || expr2 || expr3)
    {
        std::cout << "or activated";
    }
}
