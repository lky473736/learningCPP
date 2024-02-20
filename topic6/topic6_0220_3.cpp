/*
    기본 클래스를 상속받는 유도 클래스를 만들기

    class Base {
        // base class members~~
    };

    class Derived : access-specifier Base{
        // derived class members
    };

    access-specifier : public, private, protected
*/

#include <iostream>

class Base {
        // base class members~~
};

// 유도 클래스를 생성
class Derived : public Base {
        // derived class members
};

int main() {
    Base b;
    Derived d;

    return 0;
}

/*
    public : 가장 흔히 사용되는 상속 방식
    is-a 관계의 정의와 가장 일치
*/