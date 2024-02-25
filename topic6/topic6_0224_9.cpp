/*
    복사 생성자의 상속

    - 기본 클래스로부터 상속되지 않는다
    - (복습) 복사 생성자가 호출될 때
        - 어떤 함수의 pass by value 형식으로 매개변수 형태로 복사될 때
        - 다른 객체를 복사할 때
        - 원래 있던 객체로 다른 객체를 만들 때
    - 기본 클래스에서 구현한 복사 생성자를 호출할 수 있다
*/

#include <iostream>

class Base {
private :
    int x;

public : 
    Base() {
        std::cout << "base 생성자 호출" << std::endl;
    }
    Base(int x) 
        : x(x)
    {
        std::cout << "base args 생성자 호출" << std::endl;
    }
    ~Base() {
        std::cout << "base 소멸자 호출" << std::endl;
    }
    Base(const Base &source) 
        : x(source.x)
    {
        std::cout << "base 복사 생성자 호출" << std::endl;
    }
};

class Derived : public Base { 
private :
    int dx;

public : 
    Derived() {
            std::cout << "Derived 생성자 호출" << std::endl;
    }
    Derived(int dx) 
        : Base(dx), dx(dx)
    {
        std::cout << "Derived args 생성자 호출" << std::endl;
    }
    ~Derived() {
        std::cout << "Derived 소멸자 호출" << std::endl;
    }
    Derived(const Derived &source) 
        : Base(source), dx(source.dx)
    {
        std::cout << "Derived 복사 생성자 호출" << std::endl;
    }
};

void sampleFunction(Derived d) {
    return;
} // 복사 생성자

int main() {
    Derived d(1);
    sampleFunction(d);
}