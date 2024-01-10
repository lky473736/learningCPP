/* 
    함수의 정의
    - 함수의 이름
    - 매개변수 리스트 (parameter)
    - 리턴 타입 
    - 본문
*/

#include <iostream>

void print_daramji(int num_daramji);
// 리턴하지 않고, 정수를 인수로 받는 함수

int main()
{
    print_daramji(3); // 호출
    std::cout << "func activated" << std::endl;
    return 0;
}

void print_daramji(int num_daramji)
{
    std::cout << num_daramji << " daramji here" << std::endl;
    return; // void형 안에서도 return만 사용 시에 main 함수로 복귀
}
