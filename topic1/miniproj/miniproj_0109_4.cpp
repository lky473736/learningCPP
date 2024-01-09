// miniproj 4. 세 주사위가 동시에 홀수가 나올 확률
// https://github.com/lky473736/problemsolving/blob/main/self-made/quiz%20for%20endterm%20-%20learningpython.pdf

#include <iostream>

int main()
{
    int counting_all = 0;
    int counting_specific = 0;
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 6; k++)
            {
                counting_all++;
                
                if ((i+1) % 2 != 0 && (j+1) % 2 != 0 && (k+1) % 2 != 0)
                {
                    counting_specific++;
                }
                
                std::cout << i + 1 << ' ' << j + 1 << ' ' << k + 1 << " | " << counting_all << ' ' << counting_specific << std::endl;
            }
        }
    }
    
    std::cout << "counting_all : " << counting_all << std::endl;
    std::cout << "counting_specific : " << counting_specific << std::endl;
    
    return 0;
}
