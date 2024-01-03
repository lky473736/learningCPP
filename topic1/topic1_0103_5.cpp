/* 
    네임스페이스
        - std::cout, std::cin에서 "std::"가 네임스페이스
        - 충돌 방지를 위함 (외부 라이브러리와 구현한 소스코드 간의 이름 충돌 피함)
        - 코드의 그룹화
        - "::" == scope resolution operator
        
    예를 들어, python 3에서도 "np.reshape(k)"와 같이
    라이브러리의 이름을 명시하는 것처럼 c++에서도 그렇게 명시 (안헷갈릴려고)
*/

/*
void function()
{
    std::cout << "func1";
}

void function()
{
    std::cout << "func2";
}

int main()
{
    std::cout << "example of namespace";
    function();
}

    이러면 아래와 같은 오류가 발생
    
    main.cpp:53:6: note: ‘void function()’ previously defined here
       53 | void function()
          |      ^~~~~~~
          
    네임스페이스를 지정해서 할 수 있다
*/

#include <iostream>

namespace A
{
    void function()
    {
        std::cout << "func1\n";
    }
}

namespace B
{
    void function()
    {
        std::cout << "func2\n";
    }
}

int main()
{
    std::cout << "example of namespace\n";
    A::function(); // namespace A의 function 함수를 수행해라
    B::function(); // namespace B의 function 함수를 수행해라
}

/*
    std::cout, std::cin == std라는 네임스페이스 안에 있는 함수이다.
    (추측) std는 iostream 파일에 있을 듯
*/

/*
    using namespace를 이용해서 코드 단축 가능
    
    std::cout
    -> using namespace std;
       main() ...
       cout << "이렇게 축약이 가능하다는 것"
       
    import * from tkinter이랑 비슷하다고 볼 수 있겠다
*/
