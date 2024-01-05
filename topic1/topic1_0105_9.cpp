/*
    배열 : compound 데이터 타입, row-oriented 방식, 같은 자료형을 한 블록 형태로 메모리에 저장
    (클래스도 compound 데이터 타입)
    
    배열의 특징
    - 고정된 길이 (한번 길이가 결정되면 길이 변동 불가)
    - 연속된 메모리 주소에 저장
    - out of bound에 체크하지 않는다
*/

/*
    배열의 정의 : elementtype array_name [constant number of elements];
    따라서 [] 안에 가능한 건 상수형 변수 (const) 또는 숫자이다.
*/

#include <iostream>

int main()
{
    const int num_elements = 4;
    std::string season[num_elements] = {"spring", "summer", "fall", "winter"};
    
    //////////////////////////
    
    int arr[10]; // 4바이트
    
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    
    for (int i = 0; i < 10; i++)
    {
        std::cout << arr[i] << std::endl;
        printf ("%p\n", &arr[i]); // 연속된 메모리 주소에 저장
        printf ("--------\n");
    }
    
    return 0;
}
