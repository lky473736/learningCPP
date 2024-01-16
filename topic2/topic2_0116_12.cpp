/*
    배열을 함수로 전달
    
    - 형식적 매개변수 정의에 []를 사용
    - void print_arr(int numbers[]);
    - 즉 배열의 주소를 전달하는 것 (배열의 첫 요소의 메모리를 매개변수에 복사)
    - 따라서 함수는 배열에 얼마나 많은 요소가 있는지 당연히 모름
    - 배열의 요소는 복사되지 않는다 (pass by value되지 않는다)
*/

#include <iostream>

void print_arr (int numbers[], int size);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    const int size = 5;
    
    print_arr (numbers, size); // 배열명은 배열의 시작 주소를 가리킨다
    
    for (int i = 0; i < size; i++) // void 함수에서 변경한 배열값이 그대로 유지
    {
        std::cout << i << "번째 : " << numbers[i] << std::endl;
    }
    
    return 0;
}

// 배열 == 포인터
// 따라서 배열을 사용자 지정 함수에 사용할 땐 component에 접근 가능하다
// 포인터 변수는 함수 내에서 변화를 줄 수 있다는 것

void print_arr (int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        numbers[i] = i; // 0 1 2 3 4
        std::cout << i << "번째 : " << numbers[i] << std::endl;
    }
}
