// 생성자, 소멸자 예제

#include <iostream>

class Sample
{
public :
    Sample()
    {
        std::cout << "객체 생성됨. 생성자 작동" << std::endl;
        val = 0; // 보통 생성자는 맴버 변수 초기화 목적으로 많이 사용됨 (쓰레기값 방지하기 위해서)
    }
    
    Sample(int input)
    {
        std::cout << "객체 생성됨. val이 들어옴. : ";
        val = input;
        std::cout << val << std::endl;
    }
    
    ~Sample()
    {
        std::cout << "객체 소멸됨. 소멸자 작동" << std::endl;
    }

private :
    int val;
};

int main()
{
    Sample *smp = new Sample {10};
    delete smp;
    
    return 0;
}
