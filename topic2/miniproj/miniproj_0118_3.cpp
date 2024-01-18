// miniproj 3 : 고도화된 binary computer 
// pass by reference와 배열 연습 겸

#include <iostream>

inline void change_operand (int &a, int &b);
void binary_computer (int &a, int &b, char binary_operator, int testcase);
void print_arr (double arr[]);

int main() 
{
    int a, b;
    int T;

    std::cout << "테스트케이스 횟수 입력 (1~5) : ";
    std::cin >> T;
    
    std::cout << "a와 b를 공백으로 구분하여 입력 : ";
    std::cin >> a >> b;
    
    for (int i = 0; i < T; i++)
    {
        switch(i)
        {
            case 0 : 
                binary_computer(a, b, '+', T);
                break;
                
            case 1 : 
                binary_computer(a, b, '-', T);
                break;
                
            case 2 : 
                binary_computer(a, b, '*', T);
                break;
                
            case 3 : 
                binary_computer(a, b, '/', T);
                break;
                
            case 4 : 
                binary_computer(a, b, '%', T);
                break;
                
            default : 
                std::cout << "ERROR" << std::endl;
                break;
        }
        
        int wanna_change = -1;
        
        if (i < T - 1)
        {
            std::cout << "a나 b를 변경하고 싶다면 0을 입력, 변경을 원치 않으면 0 이외의 수를 입력 : ";
            std::cin >> wanna_change;
            
            if (wanna_change == 0)
            {
                change_operand(a, b);
            }
        }
    }
    
    return 0;
}

inline void change_operand (int &a, int &b)
{
    std::cout << "바꾸고 싶은 a와 b를 공백으로 구분하여 입력 : ";
    std::cin >> a >> b;
}

void binary_computer (int &a, int &b, char binary_operator, int testcase)
{
    int c = 0;
    static double arr[5];
    static int counting_access = 0;
    
    switch(binary_operator)
    {
        case '+' : 
            c = a + b;
            break;
            
        case '-' : 
            c = a - b;
            break;
            
        case '*' : 
            c = a * b;
            break;
            
        case '/' : 
            c = a / b;
            break;
            
        case '%' : 
            c = a % b;
            break;
            
        default : 
            std::cout << "ERROR" << std::endl;
            break;
    }
    
    arr[counting_access] = c;
    
    std::cout << "----------------" << std::endl;
    std::cout << "현재 a, b : " << a << ", " << b << std::endl;
    std::cout << counting_access + 1 << "번째 계산 완료" << std::endl;
    
    counting_access++;
    
    if (counting_access == testcase) 
    {
        print_arr(arr);
    }
}

void print_arr (double arr[])
{
    double *p;
    p = arr;
    
    for (int i = 0; i < 5; i++)
    {
        std::cout << *(p+i) << "  ";
    }
}
