/*
    const 포인터 (암기)
    - const 포인터할 때는 const 앞에 * 붙이기
    - const의 포인터 : 데이터가 const / 포인터는 다른 데이터를 가리킬 수 있음
    - const인 포인터 : 포인터가 const / 데이터는 변경 가능함
    - const의 const인 포인터 : 데이터와 포인터가 전부 const / 둘 다 안됨
*/

#include <iostream>

int main()
{
    int a = 100;
    int b = 50;
    
    const int *p1 = &a; // const의 포인터
    int *const p2 = &a; // const인 포인터
    const int *const p3 = &a; // const의 const인 포인터
    
    // const의 포인터
    // *p1 = 30; // 에러남
    p1 = &b; // 이건 됨
    
    // const인 포인터
    *p2 = 30; // 이건 됨
    // p2 = &b; // 에러남
    
    // const의 const인 포인터
    // *p3 = 30; // 에러남
    // p3 = &b; // 에러남
}
