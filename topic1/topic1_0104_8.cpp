/* 
    integer : 정수
    floating point (float, double) : 실수 (연산, 대입 시 float 사용 X / 잘림 현상)
    boolean : 진리값 (참과 거짓)
*/

/* 
    sizeof operator : 타입 또는 변수의 바이트 단위 크기를 return
    C랑 쓰임새 똑같음
    
    sizeof(int) == 4
    sizeof(short) == 2
    sizeof(long) == 8
    sizeof(float) == 4
    sizeof(double) == 8
    sizeof(char) == 1 
    
    C언어에서 long형은 4바이트지만 c++에서 long형은 8임
*/

/*
    상수 : 변수와 유사하지만, 초기화 이후 변할 수 없음
    상수를 사용하는 이유 : 실수 방지, 프로그램의 비수정성을 위해, 보안을 위해, 아~주 드물게도 시스템해킹에서 injection을 방지하기 위해
    
    상수 선언 종류
        - const int
        - #define ...
*/
    
#include <iostream>

int main()
{
    std::cout << sizeof(int) << '\n';
    std::cout << sizeof(short) << '\n';
    std::cout << sizeof(long) << '\n'; // 주의
    std::cout << sizeof(float) << '\n';
    std::cout << sizeof(double) << '\n';
    std::cout << sizeof(char) << std::endl;
    
    const int a = 30;
    a = 40; // 이거 안됨. 상수는 read-only variable
}
