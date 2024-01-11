/*
    prototype
    
    - 컴파일러는 함수의 호출 이전에 함수의 정의를 알아야 함
    - 따라서 forward declaration을 통해 프로그램의 초기에 함수를 정의해주고, main 함수 뒤에 함수의 디테일을 작성함
    - 헤더 파일의 활용
*/

#include <iostream>

std::string func1 (const std::string a); // prototype, forward declaration (한글로 전방 선언)

int main()
{
    std::cout << func1("string");
}

std::string func1 (const std::string a) 
{
    return a;
}
