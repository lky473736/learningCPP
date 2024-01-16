/*
    inline 함수 
    - 함수를 inline으로 정의하면 컴파일 단계에서 함수 내의 명령문으로 함수 호출이 대체
    - 바이너리 파일의 용량이 커지지만, 일반적인 함수 호출보다는 빠름
    - 매소드를 이용해 함수를 대체하는 것과 비슷한 역할
    
    inline int add_num (int a, int b)
    {
        return a + b;
    }
    
    int main()
    {
        int p = 0, a = 10, b = 10;
        p = add_num(a, b); // add_num을 호출하지 않고 a + b (속도 빠름)
        
        std::cout << p << std::endl;
        
        return 0;
    }
*/

/*
    recursive call
    - 재귀함수 : 스스로를 호출하는 함수
    - 재귀 호출을 끝내는 base step이 반드시 있어야 함 (스택오버플로우 주의하기)
*/

#include <iostream>

inline long factorial (long a)
{
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}

int main()
{
    std::cout << factorial(5) << std::endl;
    return 0;
}
