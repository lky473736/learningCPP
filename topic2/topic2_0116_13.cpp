// 만약 배열을 함수에 넣고 변화를 방지하고 싶다면
// -> const 키워드 사용

#include <iostream>

void print_arr (const int numbers[], int size);

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

void print_arr (const int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // numbers[i] = i; : const라서 안됨
        std::cout << i << "번째 : " << numbers[i] << std::endl;
    }
}
