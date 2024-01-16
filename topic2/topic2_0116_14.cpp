/*
    pass by reference
    - 참조자 == main함수에서의 변수를 가리키는 일종의 주소
    - 참조자를 전달
    - 함수 내에서 값의 변환이 필요할 경우 사용한다
    - 값의 변환을 위해선 참조자가 필요 
    - pass by reference == 참조자값을 인수로 받음
    - 변수명을 보낼 수 있다 (특정 함수의 parameter형이 reference라면)
*/

#include <iostream>

void scale_num (int &num); // 참조자 num을 인수로 받음

int main()
{
    int num = 1000;
    scale_num (num); // num이라는 변수의 참조 (num의 main함수의 주소값을 준다)
    std::cout << num << std::endl;
    return 0;
}

void scale_num (int &num)
{
    num = 100;
}

/* C언어에서 포인터를 이용한다면 다음과 같다.

#include <stdio.h>

void scale_num (int *num);

int main()
{
    int *num;
    int i = 1000;
    
    num = &i;
    scale_num (num);
    printf ("%d\n", *num);
    return 0;
}

void scale_num (int *num)
{
    *num = 100;
}
*/
