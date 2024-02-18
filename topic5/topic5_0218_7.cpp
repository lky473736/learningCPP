/*
    static 클래스 멤버 
    - class에 공유하는 멤버 변수나 함수를 의미
    - 객체 안에 저장되지 않고, class 안에 따로 저장된다
*/

// 객체의 수를 계산하는 프로그램 (static 변수를 사용)

#include <iostream>

using namespace std;

class Player {
private :
    int x, y;
    int speed;
    static int numPlayer;

public :
    Player(int x, int y, int speed)
        : x(x), y(y), speed(speed)
    {
        numPlayer += 1;
    }

    void setposition (int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void printposition() 
    {
        cout << x << " " << y << endl;
    }

    static int getNumPlayer() 
    {
        return numPlayer;
    }
};

int Player::numPlayer = 0; // static 변수 초기화는 main함수 바깥 영역에서 하게 됨

int main()
{
    int numPlayer = 0;

    Player p1(1, 1, 1);
    // numPlayer += 1;

    Player p2(1, 2, 3);
    // numPlayer += 1;

    // cout << numPlayer << endl;

    // p1과 p2 모두 numPlayer 변수와 getNumPlayer()를 공유하고 있다
    cout << Player::getNumPlayer() << endl; 

    return 0;
}