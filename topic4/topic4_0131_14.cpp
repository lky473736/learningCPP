/*
    생성자 위임
    
    - 다양한 생성자의 오버로딩에 유사한 코드가 반복적으로 사용되면 오류날 가능성이 높다
    - 생성자 위임으로 반복을 줄일 수 있다
    - 다른 생성자를 맴버 초기화 리스트 위치에서 호출
    - 생성자 맴버 초기화 리스트를 사용해서만 가능함
    
    생성자 기본 매개변수
    
    - 생성자 또한 함수이므로 기본 매개변수 사용 가능
*/

#include <iostream>

class Player
{
public : 
    Player(std::string input_name="None", int input_health=0) // 기본 매개변수
        :  name{input_name}, health{input_health}
    {
        
    }
    
    Player()
        : Player{"None", 0} // 위의 생성자 맴버 초기화 리스트를 호출
    {
        
    }
    
private :
    std::string name;
    int health;
};

int main()
{
    Player p1 {"lky"}; // input_health가 안들어오니깐 기본매개변수에 의해 0으로 초기화됨
}
