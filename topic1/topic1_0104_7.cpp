/*
    변수 : 메모리의 주소에 붙이는 이름일 뿐
    변수를 만들면 메모리에 변수를 위한 바이트가 확보
    변수에 값 대입 -> 공간에 값 기록
    
    variable definition (정의) : 변수 만듦
    ex) int a;
    
    variable initialization (초기화) : 변수 정의 + 초기값 설정
    ex) int a = 1024;
    
    using a variable (사용) : 변수에 값 대입 or 변수를 출력 or 변수를 입력
    ex) a = 10; <- 변수에 값 대입했으니 사용한거임
        std::cin >> a; <- 사용자 입력 받았으니 사용한거임
        std::out << a; <- 출력하는거니깐 사용한거임
*/

#include <iostream>

int main()
{
    char a = 10; // 1바이트
    short b = 10; // 2바이트
    int c = 10; // 4바이트
    
    std::string name = "samsung"; 
    // c++에서는 문자열 배열 말고 이렇게 문자열 초기화 가능
    // C에서는 위 코드를 char name[] = "samsung"; 이렇게 해야함
    // 아니면 포인터형으로 쓰면 char *name = "samsung";
    
    printf ("%p %p %p\n", &a, &b, &c); // 1, 2 차이나면서 변수들이 연이어서 저장됨
    printf ("%x %x %x\n", *(&a), *(&b), *(&c));
    
    std::cout << name;
}
