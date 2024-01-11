/*
    path by value
    
    - 함수에 데이터를 전달할 때는 값으로 전달 (path by value)
    - 데이터의 값이 '복사되어' 전달
    - 전달된 인수는 함수를 통해 변화되지 않음 (포인터, 참조자는 예외)
*/

#include <iostream>

using namespace std;

void param_test (int formal) // 50 (path by value)
{
    cout << formal << endl; // 50 출력
    formal = 100; // 100
    cout << formal << endl; // 100 출력
}

int main()
{
    int actual = 50;
    cout << actual << endl; // 50 출력
    
    param_test (actual);
    
    cout << actual << endl; // 50 출력 (main 함수 내 actual은 변하지 않음)
    
    return 0;
}
