// cmath 헤더파일을 이용해 함수를 이해

#include <iostream>
#include <cmath>

int main() 
{
    std::cout << sqrt(400) << std::endl; // 제곱근 함수
    
    double result = 0;
    result = pow(2.0, 3.0); // n제곱 함수
    
    std::cout << result << std::endl;
    
    // cmath 내부에 sqrt, pow의 함수 구조를 굳이 알 필요는 없다
    // argument를 어떻게 받는지, 사용하는 방식만 알면 됨
}
