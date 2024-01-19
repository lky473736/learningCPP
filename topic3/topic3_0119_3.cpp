/*
#include <iostream>

int main()
{
    int score = 10;
    double score_precise = 100.7;
    
    int *score_ptr = nullptr;
    score_ptr = &score;
    score_ptr = &score_precise; 
    // 당연히 에러남 (컴파일러는 포인터가 가리키는 타입이 맞는지 확인한다)
} */

/*
    dereferencing (역참조)
    - 포인터의 주소에 저장된 데이터에 접근한다
    - * 연산자를 사용한다
    - "참조"하는 것이기 때문에 데이터의 값을 변경 가능하다
    - 변수가 사용될 때 * == 역참조 / 변수를 선언할 때 * == 포인터 선언
*/

#include <iostream>

int main()
{
    int score = 10;
    int *score_ptr = &score;
    
    std::cout << *score_ptr << std::endl; // 10
    *score_ptr += 10; // score_ptr 주소에 들어있는 데이터에 10을 더한다
    
    std::cout << *score_ptr << std::endl; // 20
    std::cout << score << std::endl; // 20
    // score_ptr은 score의 주소값이다
    // *score_ptr += 10으로 데이터를 수정하였기 때문에 같게 나온다
    
    return 0;
}
