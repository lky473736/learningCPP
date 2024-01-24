// 만약 copy가 필요한 경우가 아니라면 const &를 쓰는 것이 기본이다
// 그니깐 함수 내부에서 호출 스택에 있는 변수를 수정하지 않는다면 const를 쓰는게 표준이다
// 함수에서 main함수의 메모리에 접근할 땐 그 메모리값을 수정하지 않는 이상은 const ~&를 쓰는 것이 메모리측면에서 더욱 효율적이다 

#include <iostream>

using namespace std;

void print_const_ref (const int &val) // main함수에 있는 val의 변수값을 바꾸지 않겠다
{
    cout << val << endl;
}

void print_address (int *ptr)
{
    cout << *ptr << endl;
}

void print_ref (int &val)
{
    cout << val << endl;
}

void print_val (int val)
{
    cout << val << endl;
}

int main()
{
    int a = 10;
    
    print_val(a);
    print_ref(a);
    print_const_ref(a);
    print_address(&a);
    
    return 0;
}
