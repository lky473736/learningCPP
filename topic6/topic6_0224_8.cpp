// 그러면 유도 클래스에서 어떻게 기본 클래스의 생성자를 원하는대로 호출 가능한가? (기본값은 기본 클래스의 멤버 초기화 리스트가 없는 생성자)
// -> 유도 클래스의 생성자에 초기화 리스트를 사용하여 사용자가 원하는 기본 클래스의 생성자 호출이 가능하다

#include <iostream>

class Base {
private :
    int value;

public :
    Base() : value(0) {
        std::cout << "Base no-args constructor" << std::endl;
    }
    Base(int x) : value(x) {
        std::cout << "Base int overloaded constructor" << std::endl;
    }
    ~Base(){
        std::cout << "Base destructor" << std::endl;
    }
};

class Derived : public Base {
private : 
    int doubled_value;

public :
    Derived() : doubled_value(0) {
            std::cout << "Derived no-args constructor" << std::endl;
        }
    Derived(int x) : Base(x), doubled_value(x*2) // 이렇게 기본 클래스의 생성자 호출. 저기 Base(x)의 args는 값을 변경해도 된다. 값은 기본 클래스의 생성자에 전달됨
    {
        std::cout << "Derived int overloaded constructor" << std::endl;
    }
    ~Derived(){
        std::cout << "Derived destructor" << std::endl;
    }
};

int main(){
    // Base b1;
    // Base b2(100);

    // Derived d1;
    Derived d2(10); 
}