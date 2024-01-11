/*
    return문
    
    - 사용자 지정 함수 안에서의 return : 함수의 결과값을 전달 and 함수를 즉각적으로 종료
    - main함수 안에서의 return : 프로그램 종료
*/

#include <iostream>

void func1();

int main()
{
    return 0; 
    func1(); // 위 return 0로 인하여 프로그램이 종료됨. 이 함수 작동 안함
}

void func1()
{
    std::cout << "no act";
}
