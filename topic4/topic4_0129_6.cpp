/*
    맴버 함수 (메소드)
    
    - 기존 함수의 구현과 비슷함
    - 멤버 변수에 접근이 가능해짐 -> parameter로 전달할 데이터가 적어짐
    - 구현 장소
        - 클래스 선언 내에 구현 
        - 클래스 선언 외부에 구현 : class이름::함수이름(함수parameter){~~~}
    - 클래스 선언은 .h 파일에 작성 / 클래스 구현은 .cpp 파일에 작성 (대부분)
*/

// getter, setter을 이용해서 정보은닉으로 되어있는 변수에 접근한다

#include <iostream>

/* 클래스 내부에 함수를 구현
class Account
{
public : 
    void setter (double bal)
    {
        balance = bal;
    }
    
    double getter ()
    {
        return balance;
    }
    
private : 
    double balance = 0;
};
*/

// 클래스 외부에 함수를 구현
class Account
{
public : 
    void setter(double bal);
    double getter();

private : 
    double balance = 0;
};

void Account::setter(double bal)
{
    balance = bal;
}

double Account::getter()
{
    return balance;
}

int main()
{
    Account acc;
    acc.setter (50000.0);
    std::cout << acc.getter();
    
    return 0;
}
