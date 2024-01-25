/*
    객체의 포인터인 경우
    
    - 역참조 후 점 연산자를 사용하여 접근한다 
    ex) (*park).withdraw(30000.0);
    - 화살표 연산자를 사용하여 접근한다
    ex) park->balance;
*/

#include <iostream>

class Account
{
    // 맴버변수 (속성)
    std::string name; // 예금주 이름
    double balance; // 계좌 잔액
    
    // 맴버함수 (매소드)
    bool withdraw (double amount); // 출금
    bool deposit (double amount); // 입금
};

int main()
{
    // 객체의 생성
    Account lim;
    Account min;
    Account *park = new Account();
    delete park;
}
