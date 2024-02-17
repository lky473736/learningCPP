/*
    OOP 개요 : 절차적언어와의 비교, 데이터+함수, 캡슐화, 정보은닉
    클래스와 객체 : 클래스 생성, 클래스를 메모리에 올림 == 객체
    생성자와 소멸자 : 클래스 생성시 자동으로 호출되는 멤버함수 == 생성자, 메모리에 클래스가 소멸 시 자동으로 호출되는 멤버함수 == 소멸자
    생성자 오버로딩 : 기본 parameter, 생성자 위임, 멤버 초기화 리스트
*/

/*
    복사 생성자
    
    - 객체가 복사될 때 자동으로 호출되는 멤버함수 
        - 1) pass by value 방식으로 함수의 매개변수로 전달 시에
        - 2) 함수에서 value의 형태로 결과를 반환 시에
        - 3) 기존 객체를 기반으로 새로운 객체를 생성 시에
    - 객체가 어떤 방식으로 복사될 지 정의해줘야함 (컴파일러는 그걸 모름)
    - 사용자가 구현하지 않는 경우 컴파일러가 자동으로 하나 만들어주기는 하지만 기능이 부족하니 사용자가 만드는 것이 중요
*/

#include <iostream>

class Player 
{
public :
    Player(int p, int q, int r)
        : a(p), b(q), c(r)
    {   

    }

    Player()
    {

    }
    
private :
    int a;
    int b;
    int c;
};

void display_player (Player p) // 객체를 pass by value <- 복사 생성자 작동
{
    
} // 소멸자 작동

Player create_super_enemy() // 객체를 value의 형태로 반환 (이때 자료형을 클래스명으로 지정해줘야함)
{
    Player an_enemy(1, 1, 1);
    return an_enemy; 
} // 소멸자 작동

int main()
{
    Player hero (0, 0, 1); // 생성자 작동 
    display_player(hero);
    
    Player enemy;
    enemy = create_super_enemy(); // enemy라는 빈 객체에 복사 <- 복사 생성자 작동
    
    Player heroin (1, 1, 1);
    Player another_heroin = heroin; // 객체를 만들면서 복사 <- 복사 생성자 작동
    
    /*  위 과정이랑 지금 과정은 아예 다르다. 초기화랑 대입은 다른 연산
        
        Player another;
        another = hero;
    */
    
    /* Player another_heroin = heroin과 똑같은 구문은 아래와 같다
        Player another_heroin {heroin};
    */
}

// 중괄호 대신 소괄호를 사용해야 할 것 같다.