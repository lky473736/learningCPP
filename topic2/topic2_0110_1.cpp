/*
    C++ 프로그램의 함수
    - 사용자 지정 함수, 클래스
    - C++ 표준 라이브러리 (iostram, stdio.h ...)
    - third party 라이브러리 (algorithm, list, 깃허브 ...)
    
    함수 -> 모듈화 -> 재사용성
*/

// 모듈화 : main 함수에는 기능을 구현한 함수만 호출하고, 함수는 따로 구현해놓는 방식 (가시성이 뛰어남, 기능에 따라 구분 가능)
// 앞으로 프로그램을 작성할 땐 기능에 따라 함수단위로 작성하는 '모듈화'된 코드를 지향할 것
// 아래는 모듈화의 대표적인 예시 코드

#include <iostream>

void func1();
void func2();
void func3();

int main()
{
    func1();
    func2();
    func3();
    
    /*
        모듈화가 아니였다면 main 함수에 아래같이 구현했음
        
        std::cout << "daramji" << std::endl;
        std::cout << "hamster" << std::endl;
        std::cout << "goyang-ee" << std::endl;
    */
}

void func1()
{
    std::cout << "daramji" << std::endl;
}

void func2()
{
    std::cout << "hamster" << std::endl;
}

void func3()
{
    std::cout << "goyang-ee" << std::endl;
}
