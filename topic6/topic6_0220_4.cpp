/*
    protected 멤버 (기본 클래스에서 사용된다)
    
    - 기본 클래스에서 접근 가능
    - 유도 클래스에서 접근 가능
    - 기본 또는 유도 클래스의 객체로부터는 접근이 불가능
    - 일종의 '상속이 이뤄지는 private'
    - private으로 멤버 변수나 함수를 사용할 때
        - 기본 클래스에서 사용 가능
        - 유도 클래스에서 접근 불가능
    - protected를 쓰면 기본도, 유도도 멤버를 private으로 사용이 가능하다
*/

#include <iostream>

class Entity {
protected :    
    int x, y;

public :
    Entity(int x, int y) 
        : x(x), y(y) { }

    void ShowPosition() {
        std::cout << this->x << ' ' << this->y << std::endl;
    }

    void Talk() {
        std::cout << "hello" << std::endl;
    }
};

// Player는 Entity를 상속한다
// x, y가 기본 클래스에서 protected이기 때문에 값을 변경할 수 있는 것이다 (public은 보안 위험이 크니깐 / private이면 값을 변경하지 못함)
class Player : public Entity {
private : 
    int hp, xp, speed;

public :
    Player (int x, int y, int speed) 
    : Entity(x, y), speed(speed) { }

    void Move (int dx, int dy) {
        this->x += dx; 
        this->y += dy;
    }
};

int main() {
    Entity e(1, 1);
    e.ShowPosition();
    e.Talk();

    Player p(5, 5, 10);
    // p는 Entity을 상속했기 때문에 showposition, talk 기능까지 사용할 수 있게 된다
    p.Move(1, -1);
    p.ShowPosition();
    p.Talk();
}