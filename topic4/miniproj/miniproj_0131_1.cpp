// miniproj 1. ATM 시스템 만들기
// https://cypsw.tistory.com/entry/C-GOTO-%EB%A5%BC-%EC%93%B0%EC%A7%80-%EB%A7%90%EB%9D%BC%EB%8A%94-%EA%B0%9C%EC%86%8C%EB%A6%AC
// 출금, 입금, 잔액조회, 계좌등록, 계좌조회
// 출금, 잔액조회 시 비밀번호 물음 

#include <conio.h>
#include <iostream>
#include <array>

bool find_account(int input_account, int password);
void create_account();

int account[100][2];
int account_counting = 0;

class atm // atm 클래스
{
public :
    atm (int input_id)
        : account_id{input_id}, account_amount{10000}
    {
        std::cout << "어서오세요." << std::endl;
    }
    
    ~atm()
    {
        std::cout << "감사합니다." << std::endl;
    }
    
    bool withdraw (int amount);
    bool deposit (int amount);
    void check_amount ();
    
private :
    int account_id;
    int account_amount;
};

bool atm::withdraw (int amount) // 출금
{
    int verifying_password = 0;
    std::cout << "비밀번호를 입력하세요. : ";
    std::cin >> verifying_password;
    
    if (find_account(account_id, verifying_password) == true)
    {
        ; // pass
    }
    
    else
    {
        std::cout << "틀렸습니다. 다시 메인 화면으로 이동합니다." << std::endl;
        return false;
    }
    
    if (account_amount - amount < 0) // 출금할 금액에서 현재 잔액 뺐을 때 마이너스면
    {
        std::cout << "현재 잔액에서 더 이상 출금을 할 수 없습니다." << std::endl;
        return false;
    }
    
    std::cout << "출금이 완료되었습니다." << std::endl;
    account_amount -= amount;
    return true;
}

bool atm::deposit (int amount) // 입금
{
    std::cout << "입금이 완료되었습니다." << std::endl;
    account_amount += amount; // 입금은 상관 없으니 그냥 입금
    return true;
}

void atm::check_amount()
{
    std::cout << "현재 잔액은 " << account_amount << " 입니다." << std::endl;
}

int main()
{
    printf ("\x1B[33m***** ATM 시스템 ***** \033[0m\t\t\n");
    
    int input_id, input_password;
    
    while (true)
    {
        std::cout << "계좌등록은 id, password 입력 시 모두 111을 입력하세요." << std::endl;
        std::cout << "계좌번호 id 3자리를 입력하세요. : ";
        std::cin >> input_id;
        
        std::cout << "계좌번호 password 3자리를 입력하세요. : ";
        std::cin >> input_password;
        
        if (input_id == 111 && input_password == 111)
        {
            std::cout << "계좌등록 시스템에 도입합니다." << std::endl;
            create_account();
        }
        
        else if (input_id != 111 && find_account(input_id, input_password) == true)
        {
            std::cout << "성공하였습니다." << std::endl;
            goto login_success;
        }
        
        else
        {
            std::cout << "실패하였습니다. 다시 입력하세요." << std::endl;
        }
    }
    
login_success: 
    
    atm* accounting = new atm {input_id};
    
    int mode = -1;
    
    while (mode != 3)
    {
        std::cout << "수행하실 기능을 입력하세요. (0 : 입금 / 1 : 출금 / 2 : 잔액조회 / 3 : 종료) : ";
        std::cin >> mode;
        
        switch (mode) 
        {
            case 0 : {  // 입금
                int amount = 0;
                std::cout << "얼마를 입금하시겠습니까? : ";
                std::cin >> amount;
                accounting->deposit(amount);
                break;
            }
                
            case 1 : { // 출금
                int amount = 0;
                std::cout << "얼마를 출금하시겠습니까? : ";
                std::cin >> amount;
                accounting->withdraw(amount);
                break;
            }
                
            case 2 : {
                accounting->check_amount();
                break;
            }
                
            case 3 : {
                break;
            }
                
            default : {
                break;
            }
        }
    }
    
    delete accounting;
    return 0;
}

bool find_account(int input_id, int input_password)
{
    for (int i = 0; i < account_counting; i++)
    {
        if (account[i][0] == input_id)
        {
            if (account[i][1] == input_password)
            {
                return true;
            }
            
            else
            {
                return false;
            }
        }
    }
    
    return false;
}

void create_account()
{
    int new_id, new_password;
    
rei:
    std::cout << "계좌등록할 id를 입력하세요. : ";
    std::cin >> new_id;
    
    for (int i = 0; i < account_counting; i++)
    {
        if (account[i][0] == new_id)
        {
            std::cout << "동일한 id가 이미 존재합니다. 다시 입력하세요." << std::endl;
            goto rei;
        }
    }
    
    std::cout << "password를 입력하세요. : ";
    std::cin >> new_password;
    
    std::cout << "계좌 등록이 완료되었습니다." << std::endl;
    std::cout << "id : " << new_id << std::endl;
    std::cout << "password : " << new_password << std::endl;
    
    account[account_counting][0] = new_id;
    account[account_counting][1] = new_password;
    
    account_counting += 1;
    
    return;
}
