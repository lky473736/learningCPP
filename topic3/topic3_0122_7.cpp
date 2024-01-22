/*
    배열 vs 포인터 
    - 배열의 이름은 배열의 첫 요소의 주소를 가리킨다 (당연한거임)
    - 포인터 변수의 값은 주소값이다 (당연한거임)
    - 만약에 포인터 변수와 배열이 같은 주소를 가리킨다면
      배열과 포인터는 같은 역할을 한다 (sizeof 반환값이 다를 뿐임)
    - array_name[index] == pointer_name[index] (포인터가 배열의 시작주소를 가지고 있다면)
*/

#include <iostream>

using namespace std;

int main()
{
    int scores[] = {100, 95, 90};
    
    cout << scores << endl; // 배열의 시작 주소값 (첫 요소의 주소값)이 출력
    cout << *scores << endl; // 배열의 시작값 (첫 요소값)이 출력
    
    int *scores_ptr = scores;
    
    cout << scores_ptr << endl; // == cout << scores << endl;
    cout << *scores_ptr << endl; // == cout << *scores << endl;
    
    cout << sizeof(scores) << endl; // 12 (요소가 3개)
    cout << sizeof(scores_ptr) << endl; // 8 (64비트 시스템)
    
    cout << scores_ptr << endl; // 0x123400 (만약에 이거라면)
    cout << (scores_ptr + 1) << endl; // 0x123404 == scores_ptr + 1 * sizeof(int)
    cout << (scores_ptr + 2) << endl; // 0x123408 == scores_ptr + 2 * sizeof(int)
}
