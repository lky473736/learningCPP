/*
    생성자 오버로딩
    
    - 생성자는 오버로딩 할 수 있다 (각각의 생성자는 매개변수가 달라야 한다)
    - 생성자 초기화 리스트 (진짜(?) 초기화 방법)
        - 이전의 생성자는 생성자 본체 내에서 멤버 변수 값에 대입을 했지만 
        - 지금부터는 생성자 초기화 리스트와 동시에 값이 지정되게끔 하자 (본체 안에 들어가기 전에 이미 초기화되어있어서 편하게 작업할 수 있다)
    
    * 항상 초기화는 생성자 초기화 리스트를 이용해서 하자 (쓰레기값 방지)
*/

#include <iostream>

class Player
{
public : 
    // 각각의 생성자는 매개변수가 다르다
    Player()
        : Player_name{"None"}, Player_health{0}, Player_xp{0}
    {
        
    }
    
    Player(std::string name, int health, int xp)
        : Player_name{name}, Player_health{health}, Player_xp{xp}
    {
        
    }
    
private : 
    std::string Player_name;
    int Player_health;
    int Player_xp;
};

/* 너무 노가다이다. 생성자 초기화 리스트로 사용하면 된다
Player::Player()
{
    Player_name = "none";
    Player_health = 100;
    Player_xp = 30;
}

Player::Player(std::string name)
{
    Player_name = name;
    Player_health = 100;
    Player_xp = 30;
}

Player::Player(std::string name, int health, int xp)
{
    Player_name = name;
    Player_health = health;
    Player_xp = xp;
}
*/

int main()
{
    Player p1 {"lky", 300, 30};
    return 0;
}
