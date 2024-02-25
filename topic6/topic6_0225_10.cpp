/*
    기본 클래스의 멤버 함수 사용

    - 유도 클래스는 기본 클래스의 멤버 함수를 직접 호출 가능하다
        - 그 멤버 함수의 타입이 public, protected이라면
    - 재정의나 오버라이드 (수정)도 가능하다
    - 정적 바인딩 : 컴파일러가 타입을 기준으로 호출한다 (기본값)
*/

#include <iostream>

class Entity {
protected :
    int x, y;

public :
    Entity (int x, int y) 
        : x(x), y(y)
    {

    }

    void Talk() {
        std::cout << "hello" << std::endl;
    }
};

class Player : public Entity { // Entity 객체를 기본 클래스 삼아서 상속함
private :
    int speed;
    int hp;
    int xp;

public :
    Player(int x, int y, int speed) 
        : Entity(x, y), speed(speed)
    {

    }
    void Talk() { // Entity에 있는 함수를 다시 작성하여 덮어쓸 수 있다.
        std::cout << "hello i am in Player" << std::endl;
    }
};

int main()
{
    // 정적 바인딩으로 인해서 각자 자신의 타입 클래스에 있는 함수를 호출하는 것. 만약에 유도 클래스에 Talk를 만들지 않았다면 Entity 기본 클래스에서 Talk를 찾아 호출했을 것 (동적 바인딩)

    Entity e(1, 2);
    e.Talk(); // hello 

    Player p(1, 2, 3);
    p.Talk(); // hello i am in Player

    // 만약 e에 p를 대입시킨다면?
    e = p; // p는 유도 클래스지만 Entity 타입이기도 하니 대입 가능
    e.Talk(); // hello
    // 타입은 고정된다
}