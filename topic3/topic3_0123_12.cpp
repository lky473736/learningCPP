/*
    pass by address 3
    - 지역 변수에 대한 포인터 반환은 절대로 가능하지 않는다
    - 왜냐하면 포인터를 return한다고 가정할 때 지역변수는 함수를 벗어나는 순간 스택메모리에서 지워지기 때문이라고 볼 수 있겠다. (쓰레기값)
*/

#include <iostream>

int* impossible()
{
    int num = 0;
    int *ptr = &num;
    
    return ptr;
}

int main()
{
    std::cout << *(impossible) << std::endl; // 쓰레기값 출력
    return 0;
}
