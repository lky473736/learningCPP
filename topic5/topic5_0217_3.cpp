/*
    얕은 복사의 문제점 (Double free of object 0x7fead9f06100)
    -> 사라진 공간의 주소를 가리키고 있다. -> 해제를 두번 한다
    
    해결책 : class 안에 포인터형 변수가 있을 때엔 복사 생성자를 만들 때 깊은 복사를 사용하자
*/

#include <iostream>

class Shallow
{
private :   
    int *data;

public :   
    Shallow(int d); // 생성자
    Shallow(const Shallow &source); // 복사 생성자
    ~Shallow(); // 소멸자
    void print();
};

Shallow::Shallow(int d)
{
    data = new int; // heap 메모리에 동적할당
    *data = d;
    std::cout << "생성자 호출" << std::endl;
}

Shallow::Shallow(const Shallow &source)
    : data (source.data) // 포인터 주소값의 복사임. 포인터가 가리키는 데이터가 아님.
{
    std::cout << "복사 생성자 호출" << std::endl;
}

Shallow::~Shallow()
{
    delete data;
    std::cout << "소멸자 호출 + 메모리 해제 완료" << std::endl;
}

void Shallow::print()
{
    std::cout << *data << std::endl;
}

void print (Shallow s)
{
    s.print();
}

int main()
{
    Shallow s(1);
    print (s);

    return 0;
} // 여기서 소멸자를 이용해서 한번 더 해제하려고 한다! (double free)