/*
    깊은 복사
    - 복사 생성자가 포인터 주소를 복사하는 것이 아닌, 데이터를 복사함
    - 복사 생성자가 새로운 힙 공간을 할당하여 동일한 데이터를 생성
*/

#include <iostream>

class Deep
{
private :   
    int *data;

public :   
    Deep(int d); // 생성자
    Deep(const Deep &source); // 복사 생성자
    ~Deep(); // 소멸자
    void print();
};

Deep::Deep(int d)
{
    data = new int; // heap 메모리에 동적할당
    *data = d;
    std::cout << "생성자 호출" << std::endl;
}

Deep::Deep(const Deep &source)
    /*: data (source.data)s // 포인터 주소값의 복사임. 포인터가 가리키는 데이터가 아님.*/
{
    data = new int; // heap 메모리에 동적할당을 일단은 함
    *data = *source.data; // 역참조를 이용하여 동일한 데이터를 생성
    std::cout << "복사 생성자 호출" << std::endl;
}

Deep::~Deep()
{
    delete data;
    std::cout << "소멸자 호출 + 메모리 해제 완료" << std::endl;
}

void Deep::print()
{
    std::cout << *data << std::endl;
}

void print (Deep s)
{
    s.print();
}

int main()
{
    Deep s(1);
    print (s);

    return 0;
}