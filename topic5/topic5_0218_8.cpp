/*
    friend 키워드
    - 만약 A가 B의 friend이라면 A는 B의 private 멤버에 접근이 가능케 된다
    - 그렇다고 B가 A의 friend에 접근할 수는 없다 (일방성, 비대칭성)
    - A가 B의 friend, B가 C의 friend이라 할 지라도 A가 C의 friend는 아니다
*/

#include <iostream>

class Player
{
    friend void DisplayPlayer(const Player &p); // Player 객체를 받는 friend (멤버 변수, 함수에 접근 가능)

private :
    int x, y;
    int speed;

public : 
    Player (int x, int y, int speed)
        : x(x), y(y), speed(speed)
    {
        std::cout << "생성자 호출" << std::endl;
    }
    void setPosition (int x, int y)
    {
        this->x = x;
        this->y = y; // this 사용
    }
};

void DisplayPlayer (const Player &p) // 멤버 함수가 절대로 아니다
{
    std::cout << "friend인 DisplayPlayer() 함수 호출" << std::endl;
    std::cout << p.x << ' ' << p.y << std::endl; // 접근 가능 (friend)
}

int main()
{
    Player p1(1, 2, 3);
    p1.setPosition (10, 20);
    DisplayPlayer(p1);

    return 0;
}