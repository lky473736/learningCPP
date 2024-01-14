/*  
    scope 
    - 지역범위 : 블록 {} 내의 범위 (함수의 매개변수 또한 지역변수이다)
      예시 : 
        main...
        int a = 0; <-- 0 초기화
        {
            int a = 1; <-- 1 초기화
            std::cout << a << std::endl; <-- 1 출력 
        }
        std::cout << a << std::endl; <-- 0 출력
        
      하지만 블록 안에서 특정 값을 대입한다면 둘 다 같은 값이 출력된다.
    
    - static 지역 변수 : 정적 변수, 그 {} 안에서는 항상 존재
    - 전역범위 : 함수 밖에 정의된 변수는 어디서나 접근 가능
*/

/*
    static 
    - {}을 벗어나도 그대로 메모리에 남아있는 변수
    - 처음에 초기화 후 다시 static 초기화문을 만나도 초기화값이 아닌 그 전의 값을 유지
*/

#include <iostream>

void static_local_increment()
{
    static int num = 1;
    std::cout << "num : " << num << std::endl;
    num++;
    std::cout << "num : " << num << std::endl;
    std::cout << "----------" << std::endl;
    return;
}

int main()
{
    static_local_increment(); // 1, 2
    static_local_increment(); // 2, 3
    static_local_increment(); // 3, 4
}
