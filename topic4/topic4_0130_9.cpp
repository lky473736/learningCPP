/*
    생성자, 소멸자
    - 생성자
        - 특수한 멤버 함수
        - 객체가 생성될 때 자동으로 호출이 된다 (맴버 변수 초기화 목적으로 유용하게 사용된다)
        - 클래스와 동일한 이름을 갖는 멤버 함수 + 반환형이 없다
    - 소멸자
        - 특수한 멤버 함수
        - 객체가 소멸될 때 자동으로 호출이 된다 (메모리를 해제할 때 유용하게 사용된다)
        - 클래스와 동일한 이름을 가짐 + 이름 앞에 "~"가 붙어있음 + 반환형이 없다 + parameter도 없다
*/

#include <iostream>

class Player
{
public : 
    // 클래스와 동일한 이름을 갖는다 + 반환형이 없다 == 생성자 (오버로딩 가능)
    Player();
    Player(std::string name);
    Player(std::string name, int health, int xp);
    
    // 클래스와 동일한 이름 + 이름 앞에 ~ + 반환형 없음 + parameter 없음 == 소멸자
    ~Player(); 
    
private : 
    std::string name;
    int health;
    int xp;
};

int main()
{
    {
        Player lky {"lky", 200, 200};
        Player slayer;
        Player hero {"Hero"};
    } // 위의 3개의 객체가 스택메모리에서 소멸됨 -> 소멸자가 자동으로 호출이 됨
    
    Player *lky = new Player{"lky"};
    delete lky; // 객체가 힙메모리에서 소멸 -> 소멸자가 자동으로 호출이 됨
}
