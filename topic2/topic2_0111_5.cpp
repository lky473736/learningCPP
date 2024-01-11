/*
    parameter vs argument
    
    - parameter는 인자, argument는 인수
    - 함수의 정의에 있어서 전달하는 값은 parameter (매개변수)
    - 함수의 호출에 있어서 전달하는 값은 argument (인수)
    - parameter와 argument의 갯수, 순서, 타입은 서로 일치한다
    
    ex)
        #include <iostream>
        
        void func1 (int i); // i : parameter
        
        int main()
        {
            func1(1); // 1 : argument
        }
        
        void func1 (int i)
        {
            std::cout << i;
        }
*/

#include <iostream>

int add_numbers (int, int); // 이렇게 prototype을 작성해줘도 됨. parameter의 변수명을 굳이 작성하지 않아도 성립

int main()
{
    int result = 0;
    result = add_numbers (100, 200);
    return 0;
}

int add_numbers (int a, int b)
{
    return a + b;
}
