/*
    클래스와 객체
    
    - 클래스 
        - 객체가 어떻게 구성될 것인지 작성한 설명서 (객체가 가져야 할 데이터와 기능을 정의)
        - 사용자 정의 자료형 (user-defined data type)
        - 맴버변수 == 클래스 안 데이터 (attribute) / 맴버함수 == 클래스 안 함수 (method)
    
    - 객체
        - 클래스로부터 생성된 객체 (메모리에 올라간다)
        - 메모리에 올라간 객체를 인스턴스라고 한다
        - 객체를 통해 클래스에 정의된 맴버 함수를 호출 가능
        
    클래스는 새로운 데이터 타입을 만드는 거고,
    그 데이터 타입을 이용해 변수를 만드는 것이 객체 (구조체랑 굉장히 비슷함)
*/

/*
    클래스에 접근 : 맴버 접근 연산자 "." 사용
    ex) p.xp, p.talk("안녕하세요")
*/

#include <iostream>

class Player
{
    // 속성 (맴버변수)
    std::string name;
    int health;
    int xp;
    
    // 매소드 (맴버함수)
    void talk(std::string text);
    bool no_xp();
};

int main()
{
    Player p; // p == 객체
    
    Player* p2 = new Player();
    delete p2;
}
