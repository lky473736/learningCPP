// miniproj 2. 여태까지 했던 것 복습 (함수)

/*
    함수 : 블록 형태의, main함수에서 자주 반복하는 연산을 모듈화 (재사용성)
    C++ 프로그램의 함수 : 
        - C++ 표준 라이브러리
        - 써드 파티 (다른 사람이 만든거)
        - 사용자 지정 함수, 클래스
    프로토타입 : main함수 전에 함수의 기본형과 parameter형을 미리 선언해주는 것
    (parameter와 argument는 서로 다르다. 함수에 전달될 때 pass by value된다)
    기본값 : parameter에 기본적으로 값을 지정해줄 수 있다 (오른쪽 기준)
    overloading : 같은 함수이름이라도 parameter의 형에 따라 다르게 작동된다
    function call stack : LIFO, Stack Frame (호출이 발생할 때마다 구분선이 생김)
*/

#include <iostream>

int func (int, int b = 0); // prototype, parameter의 형 선언, 기본값 지정
double func (double, double); // overloading

int main()
{
    std::cout << func(3, 4);   
}

int func (int a, int b)
{
    return a - b;
}

double func (double a, double b)
{
    return a - b;
}
