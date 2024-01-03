/*
    <오류의 종류>
    
    1) 컴파일 에러
        - 문법적 오류 : 말 그대로 문법에서 오류가 있는 것
        - 의미 오류 : 암묵적 형연산 등
        
    2) 컴파일 경고
        - 코드에 잠재적인 문제가 있을 것으로 예상될 때
        - 에러보다는 심각 x (빌드는 된다)
        
    3) 링크 에러
        - object program에 오류가 있을 경우
        
    4) 런타임 에러
        - 프로그램 실행 도중 발생하는 오류
        - divided by zero, file not found, index out of range...
        - 프로그램 crash
        - 예외 처리 가능 (try, except, finally...)
        
    5) 논리 에러
        - 작성자의 실수가 원인
*/

#include <iostream>

int main()
{
    int distance;
    std::cout << distance;
}
        
// 위 코드는 auto 변수인 int에 아무 값도 지정하지 않고 사용했기 때문에 오류가 난거임 (gcc 컴파일러는 에러 x)
