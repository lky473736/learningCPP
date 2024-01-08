// miniproj 3. 회원가입 및 로그인 시스템 구축하기
// 관리자 id : admin, 관리자 pw : admin
// 비밀번호 조건 : 5글자 이상

#include <iostream>
#include <cstring>
#include <list>

void login();
void signup();
void admin();

static std::string database[100][2] = {{"admin", "admin"}}; // id, pw 넣을 공간 (2차원 배열로 삽입), 전역변수로 사용 
static int number_account = 1;

int main()
{
    int choose_key = 0;
    
    while (true)
    {
        std::cout << "회원가입 및 로그인 시스템" << std::endl;
        std::cout << "로그인 : 1 / 회원가입 : 2 / 사용자 종료 : 0 : ";
        std::cin >> choose_key;
        
        switch (choose_key)
        {
            case 0 : return 0; // 사용자 종료
            
            case 1 : login(); break;
            
            case 2 : signup(); break;
            
            case 3 : admin(); break;
            
            default : 
                std::cout << "ERROR" << std::endl;
                return 0;
        }
    }
    
    return 0;
}

void login()
{
    std::string id;
    std::string pw;
    
    std::cout << "id 입력 : ";
    std::cin >> id;
    
    std::cout << "pw 입력 : ";
    std::cin >> pw;
    
    if (id == "0\0" and pw == "0\0")
    {
        std::cout << "ERROR" << std::endl;
        return;
    }
    
    int i = 0;
    
    for (i = 0; i < number_account; i++)
    {
        if (database[i][0] == id && database[i][1] == pw)
        {
            std::cout << "로그인에 성공하였습니다." << std::endl;
            return;
        }
    }
    
    if (i == number_account) 
    {
        std::cout << "id 또는 pw가 일치하지 않습니다." << std::endl;
    }
}

void signup()
{
    std::string id;
    std::string pw;
    
K : std::cout << "새로운 id : ";
    std::cin >> id;
    
    for (int i = 0; i < number_account; i++)
    {
        if (database[i][0] == id)
        {
            std::cout << "이미 존재하는 id입니다. 새로운 id를 입력하십시오." << std::endl;
            goto K;
        }
    }
    
I : std::cout << "새로운 pw : ";
    std::cin >> pw;
    
    if (pw.length() < 5) // cstring::strlen(pw)
    {
        std::cout << "비밀번호는 5글자 이상으로 구성해주십시오." << std::endl;
        goto I;
    }
    
    std::cout << "회원가입이 완료되었습니다." << std::endl;
    database[number_account][0] = id;
    database[number_account][1] = pw;
    number_account += 1;
}

void admin()
{
    std::string id;
    std::string pw;
    
    std::cout << "관리자 id 입력 : ";
    std::cin >> id;
    
    std::cout << "관리자 pw 입력 : ";
    std::cin >> pw;
    
    if (id == "admin" and pw == "admin")
    {
        std::cout << "관리자 로그인 성공" << std::endl;
    }
    
    else 
    {
        return;
    }
    
    std::cout << "현재 DB 상태" << std::endl;
    
    for (int i = 0; i < number_account; i++)
    {
        std::cout << i << " : " << database[i][0] << " / " << database[i][1] << std::endl;
    }
    
    int choose_key_admin = 0;
    int index = 0;
    
    std::cout << "계정 삭제 : 1 / 계정 수정 : 2 : ";
    std::cin >> choose_key_admin;
    
    std::cout << "index : ";
    std::cin >> index;
    
    switch (choose_key_admin)
    {
        case 1 : 
            database[index][0] = '0';
            database[index][1] = '0';
            std::cout << "SUCCESS" << std::endl;
            break;
            
        case 2 :
            {
                database[index][0] = '0';
                database[index][1] = '0';
                
                std::string id_edit;
                std::string pw_edit;
                
P :             std::cout << "id_edit : ";
                std::cin >> id_edit;
                
                for (int i = 0; i < number_account; i++)
                {
                    if (database[i][0] == id)
                    {
                        std::cout << "이미 존재하는 id." << std::endl;
                        goto P;
                    }
                }
                
L :             std::cout << "pw_edit : ";
                std::cin >> pw_edit;
                
                if (pw_edit.length() < 5)
                {
                    std::cout << "비밀번호는 5글자 이상으로 구성." << std::endl;
                    goto L;
                }
                
                std::cout << "SUCCESS" << std::endl;
                break;
            }
            
        default :
            std::cout << "ERROR";
            return;
    }
}
