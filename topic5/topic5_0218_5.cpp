/* 
    기억해야 할 것
    - 객체가 메모리에 저장될 때 "함수" 가 저장되는 것이 아닌 멤버 변수가 저장되는 것.
    - 생성자, 소멸자, 멤버 함수는 단지 함수일 뿐 
*/

/*
    this, const, static, friend (객체 키워드)
    
    this
    - this는 포인터. 멤버 함수를 호출한 객체의 주소값을 의미
*/

#include <iostream>

class Player 
{
public :
    Player(int ix, int iy) 
        : px(ix), py(iy)
    { 

    }

    void setposition (int px, int py)
    {
        /*px = px;
        py = py;*/ // 누가 멤버변수이고, 누가 인자인지 명확하지 않음

        this->px = px;
        this->py = py; // this는 멤버 함수를 호출한 객체의 주소값이기 때문에, 이렇게 하면 멤버 변수를 가리켜서 혼선을 방지할 수 있다.
    }

private :
    int px, py;
};

int main()
{
    return 0;
}