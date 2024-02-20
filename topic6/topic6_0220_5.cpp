// protected 예제

#include <iostream>

class Base {
    public : 
        int a;

    protected : 
        int b;

    private :
        int c;
};

// Derived : Base의 유도 클래스
class Derived : public Base {
    // 접근이 가능한 멤버 변수 : a, b
    // c는 접근 불가이다.
};

int main() {
    Base b;
    Derived d;

    // 접근이 가능한 멤버 변수 : a
    // b, c는 접근 불가이다.
}