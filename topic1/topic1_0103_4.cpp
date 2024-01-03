/* 
    구성요소 - keyword, identifier, operator
    전처리기 지시문 - #include, #define
    main() 함수
    네임스페이스
    주석
    입출력 - cin/cout
*/

/* 
    keyword : 언어 자체에서 예약된 용어
              변수명 사용 금지 (if, for, int ...)
              
            int main()
            {
                int distance;
                int int; // 이런게 안됨
            }
              
    identifier : 변수, 함수, 타입 등 개발자가 지정함
                 대소문자 구분 가능 (c언어랑 마찬가지)
                 
    operator : 그냥 연산자 (c언어랑 똑같음)
               c++에서의 특별한 연산자 "::", ">>", "<<"
*/

/* 
    전처리기 == preprocessor (컴파일보다 전)
    #으로 시작함
    include, ifdef, ifndef, define, undef...
*/

/*
    main() function 
        - 모든 C++ 프로그램은 하나의 main함수를 지님
        - 프로그램의 진입점
        - int main과 return 0이 표준
*/

#include <iostream>

int main()
{
    int compo;
    
    std::cout << "출력 기능 "; // 표준 출력, <<은 삽입연산자
    std::cin >> compo; // 표준 입력, >>은 추출연산자
    std::cout << compo << "를 입력했고 이렇게 출력";
    
    return 0;
}
