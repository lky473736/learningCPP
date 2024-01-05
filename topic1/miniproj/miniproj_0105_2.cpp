// miniproj2. 계산기가 진짜 이상해요
// https://github.com/lky473736/problemsolving/blob/main/self-made/quiz%20for%20midterm%20for%20learningC.pdf

#include <iostream>

std::string binary_translator (int num);

int main()
{
    int num;
    std::cout << "10진수 입력 (0 ~ 255) : ";
    std::cin >> num;
    
    std::cout << "2진수 변환 결과 : " << binary_translator(num);
}

std::string binary_translator (int num)
{
    std::string string = "00000000";
    
    int index = 7;
    
    while (num != 0)
    {
        string[index--] = (char)(num % 2 + '0');
        num /= 2;
    }
    
    return string;
}
