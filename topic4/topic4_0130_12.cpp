// 인자가 있는 생성자만 구현하면 기본 생성자가 자동으로 생성되지 않는다

#include <iostream>

class Account
{
public : 
    Account(std::string input_name, double input_bal)
    {
        name = input_name;
        balance = input_bal;
    }
    bool withdraw(double amount);
    bool deposit(double amount);
    
private :
    std::string name;
    double balance;
};

int main()
{
    Account lky; // 에러남. 인자가 있는 생성자만 구현하였기 때문에
    Account lky2 {"lky2", 10000.0}; // 에러 안남.
}
