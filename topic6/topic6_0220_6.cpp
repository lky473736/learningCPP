/*
    상속에서의 생성자와 소멸자

    - 유도 클래스는 기본 클래스의 멤버를 포함하기 때문에 유도 클래스가 초기화 되기 이전에 기본 클래스에서 상속된 부분이 반드시 초기화되어야 한다

    - 유도 클래스 객체가 생성될 때 
        - 1) 기본 클래스의 생성자 호출
        - 2) 그 다음 유도 클래스의 생성자 호출

    - 단, 소멸자는 반대이다.
    - 유도 클래스 객체가 소멸될 때
        - 1) 유도 클래스의 소멸자 호출
        - 2) 그 다음 기본 클래스의 소멸자 호출

    - 유도 클래스는 기본 클래스의 생성자, 소멸자를 상속하지 않는다
    - 대신, 기본 클래스의 생성자 및 소멸자를 호출할 수 있다
*/

// remind : public, private을 지정해놓지 않으면 기본값이 반드시 private으로 고정되어 있다

#include <iostream>

using namespace std;

class Base {
public :
    Base() {
        cout << "기본 클래스의 생성자" << endl;
    }
    ~Base() {
        cout << "기본 클래스의 소멸자" << endl;
    }
};

class Derived : public Base {
public : 
    Derived() {
        cout << "유도 클래스의 생성자" << endl;
    }
    ~Derived() {
        cout << "유도 클래스의 소멸자" << endl;
    }
};

int main() {
    Base b;
    Derived d; 
    // 기본 클래스의 생성자 -> 유도 클래스의 생성자

    return 0;
}