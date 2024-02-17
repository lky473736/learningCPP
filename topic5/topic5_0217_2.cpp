/*
    사용자가 복사 생성자를 구현하지 않았다면 기본 복사 생성자를 컴파일러가 만듦.
    - 멤버 변수들의 값을 복사해서 대입하는 방식
    - 포인터 타입의 멤버 변수가 존재한다면 포인터가 가리키는 데이터의 복사가 아닌, 포인터 주소값의 복사임
*/

/* 
    복사 생성자 선언 == 동일한 타입의 const 참조자가 parameter인 생성자
    Type::Type (const Type &source) 형식

    ex) Player::Player(const Player &source);
        Account::Account(const Account &source)
*/

#include <iostream>

class Player
{
public : 
    Player (int hp, int xp)
        : hp(hp), xp(xp) 
    {
        std::cout << "생성자 호출" << std::endl;
    }

    Player(const Player& source) // 복사 생성자
        : hp(source.hp), xp(source.xp) // 멤버 초기화 리스트를 통해 복사 (얕은 복사를 이용해서)
    {
        std::cout << "복사 생성자 호출" << std::endl;
    }

    void print()
    {
        std::cout << hp << " " << xp << std::endl;
    }

private :
    int hp;
    int xp;
};

void print_information(Player p) // 복사 생성자 호출
{
    p.print();
}

int main()
{
    Player p(100, 100); // 생성자 호출
    p.print();

    /*
        Player(const Player& source) // 복사 생성자
        {
            std::cout << "복사 생성자 호출" << std::endl;
        }
        print_information(p); <= 쓰레기값이 출력된다. 그 이유는?
    */
    /*
    교수 코멘트 

        복사 생성자는 불완전한 복사 생성자입니다. 복사 생성자의 역할을 하려면, hp와 xp의 값을 source로부터 멤버변수로 복사하는 과정이 있어야 하는데 그 부분이 빠져 있습니다. 그럼에도 불구하고 영상에서 값이 제대로 복사된 이유는 비주얼 스튜디오 2017 컴파일러의 동작 방식의 차이 때문입니다. 

        비주얼 스튜디오 2022를 사용하시는 분들은 저와 동일하게 코드를 작성하면 쓰레기값이 출력되셨을 거고, 그게 원론적으로 맞습니다. 하지만 제가 영상을 찍을때 사용한 비주얼 스튜디오 2017 버전의 컴파일러에서는 이러한 명시를 하지 않아도 멤버 변수값이 복사되도록 하는 내부 처리 루틴이 있었나봅니다. 그래서 우연히 복사가 된 것으로 생각하셔야 하고, 이런식으로 작성하면 안됩니다.
    */
   // -> 따라서 복사 생성자를 호출 시에 맴버 초기화 리스트를 사용해서 먼저 복사해야 한다.

    print_information(p);

    return 0;
}