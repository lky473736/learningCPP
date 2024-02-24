/* 
    기본 클래스의 생성자 및 소멸자는 유도 클래스로 상속되지 않는다.
    대신, 유도 클래스에서 기본 클래스의 생성자 및 소멸자를 호출할 수 있다.
*/

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
    Derived(int x) : doubled_value(x*2) {
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

    // 기본적으로 유도 클래스로 이용해 객체를 만들 때 base constructor -> derived constructor로 생성자 포인터가 이동하게 된다. 하지만 만약에 오버로드된 생성자를 이용해 유도 클래스 객체에 인자를 넣어준다고 할 지언정, 따로 설정을 하지 않았다면 base constructor가 멤버 초기화 리스트가 없는 쪽으로 이동하게 된다
}