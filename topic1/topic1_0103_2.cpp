/*
    <c++ 프로그램의 구조>
    빌드 프로세스
    오류의 종류
    기본 구조, 기능과 용어
        - 키워드, 지시자, 연산자
        - 전처리 지시문
        - main() 함수
        - 주석
        - Namespace
        - 표준 입출력
        
    보통은 C와 비슷한 구조를 지닌다. C의 구조는 아래와 같다.
    
    <C 프로그램의 구조>
    프리프로세서
        - 헤더파일 
        - 사용자 정의 매크로
        - 사용자 정의 함수
    main() 함수
    사용자 정의 함수
*/

/*
    <빌드 프로세스 == 컴파일 과정 (compiler 언어의 경우)>
    source program -> object program -> load module (exe파일) -> 실행
    object code == 컴퓨터가 실행할 수 있는 코드
    compiler == source program을 object program으로 변환함
    linkage editor == object program을 load module로 변환함
    
    link 과정에서 라이브러리, 헤더파일, 매크로 등 프리프로세서가 open-subroutine됨
    build == compile + link 작업 동시에
*/

#include <iostream>

int main()
{
    int fav_num;
    
    std::cout << "Enter your favorite num : "; // std::cout : out한다 == 출력
    std::cin >> fav_num; // std::cin : in한다 == 입력
    std::cout << "Me too!" << std::endl; 
    
    return 0;
}

/* 위 코드는 아래와 동일한 역할을 한다.

#include <stdio.h>

int main()
{
    int fav_num;
    printf ("Enter your favorite num : ");
    scanf ("%d", &fav_num);
    printf ("Me too!\n");
    return 0;
}
*/
