/*
    동적 메모리 할당 (allocate dynamically)
    - 배열의 크기를 프로그램 실행 도중에 결정
    - 런타임에 힙 메모리를 할당 (스택 메모리는 정적)
    - 프로그램의 실행 도중 얼마나 많은 메모리가 필요한지 미리 알 수 없는 경우 사용
    - 큰 데이터를 저장해야 할 때 (스택은 용량이 엄청 작으니깐)
    - 객체의 생애주기를 직접 제어할 때
    - 사용이 끝나고 해제 필수 (free) -> 해제 안하면 메모리 누수
*/

/*
    new 연산자로 동적 메모리 할당이 가능하다
    new 연산자는 동적 메모리 할당과 동시에 heap에 새로 할당된 공간의 메모리 주소를 반환해준다
    delete 연산자로 동적 메모리를 해제한다
    delete 연산자는 heap 영역에 저장된 값을 지워주기 때문에 스택에 남아있는 포인터형 주소는 nullptr로 해제하여야 한다 
*/

#include <iostream>

using namespace std;

int main()
{
    int *int_ptr = nullptr; // point var in stack mem
    int_ptr = new int; // heap메모리에 int를 저장할 수 있는 공간을 할당 & new는 새로 할당된 heap 영역의 주소를 반환
    
    cout << int_ptr << endl; // heap 영역의 주소
    cout << *int_ptr << endl; // heap 영역의 쓰레기값
    
    *int_ptr = 100; // int_ptr에 100 대입 (heap)
    
    cout << *int_ptr << endl; // 100
    
    delete int_ptr; // free
    
    cout << int_ptr << endl; // 아직도 주소는 heap 영역 공간의 주소
    
    int_ptr = nullptr;
    
    // int_ptr이라는 변수 자체는 stack에 있고
    // int_ptr에 heap 메모리에 할당된 공간의 주소를 저장한다
    
    return 0;
}
