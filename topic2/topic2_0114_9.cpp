// 오버로딩 : 이름은 같지만 다른 오브젝트를 만드는 것

/*
    함수 오버로딩
    - 서로 다른 매개변수 리스트를 같는 동일한 이름의 함수를 정의
    - 이름이 같은 함수가 존재할 수는 있으나, 매개변수 유형은 서로 달라야 한다는 것
    - 추상화, 다형성의 대표적인 예시
    - 객체지향 프로그램 구현을 위한 중요한 기법
    - 반환 타입에 따르는 구분은 할 수 없다 (parameter의 타입끼리만 구분이 됨)
*/

#include <iostream>

int add_num (int, int); // prototype (parameter의 타입만 명시 가능)
double add_num (double, double);

int main()
{
    std::cout << add_num(10, 20) << std::endl; // 프로그램이 알아서 int를 argument로 받는 add_num을 호출
    std::cout << add_num(9.5, 20.6) << std::endl; // 프로그램이 알아서 double을 argument로 받는 add_num을 호출
    
    return 0;
}

int add_num (int a, int b)
{
    return a + b;
}

double add_num (double a, double b)
{
    return a + b;
}
