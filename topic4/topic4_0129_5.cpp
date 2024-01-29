// member access modifier 예제

#include <iostream>
#include <string>

class Account
{
public : 
    bool withdraw (double amount) // 출금
    {
        if (balance - amount < 0) // balance가 클래스 안에 있기 때문에 굳이 parameter로 전달해줄 필요 없음
        {
            return false;
        }
        
        balance -= amount;
        return true;
    }
    
    bool deposit (double amount) // 입금
    {
        balance += amount;
        return true;
    }
    
private : 
    std::string name; // 이름
    double balance = 0; // 계좌 잔액
};

int main()
{
    /*Account kim;
    kim.balance = 1000.0; // 컴파일 에러 (정보은닉때문에)
    kim.deposit (1000.0); // 이건 됨 (public이니깐)
    kim.name = "kim"; // 컴파일 에러 (정보은닉때문에)*/
    
    Account lim;
    lim.withdraw(100); 
}
