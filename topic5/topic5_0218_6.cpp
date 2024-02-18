/*
    const 객체
    - const correctness
    - const 객체의 멤버 변수의 값은 변경이 불가능 (보안에 철저함)
*/

#include <iostream>

using namespace std;

class Player {
private :
    int x, y;
    int speed;

public :
    Player(int x, int y, int speed)
        : x(x), y(y), speed(speed)
    {

    }

    void setposition (int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void printposition() const // 멤버 변수를 변경하지 않겠다
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    const Player p(1, 1, 1);
    p.setposition (2, 2); // 에러
    p.printposition(); // 위에 const 안쓰면 에러

    /*
        에러 메세지 :
        error: 'this' argument to member function 'setposition' has type 'const Player', but function is not marked const

        p가 const 객체이기 때문에 멤버 변수의 값을 바꾸는 setposition 멤버 함수를 컴파일러가 막음. 또한 클래스에 있는 멤버 변수를 프린트하는 printposition도 컴파일러 입장에선 변수에 접근하는 것이기 때문에 막음. 

        해결책 : 
        멤버 함수를 만들 때 멤버 변수를 이 함수에서 변경하지 않는다는 선언을 해주어야 함 (하지만 멤버 함수에서 멤버 변수를 바꿈에도 불구하고 const하겠습니다 구라치면 컴파일러는 다 잡아낸다)
        -> 멤버 함수 옆에 const 써주기
    */

    return 0;
}