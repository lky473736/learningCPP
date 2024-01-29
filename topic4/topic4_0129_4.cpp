/*
    정보은닉
    
    - 맴버 변수, 맴버 함수의 접근 속성을 만들 수 있다
    - public : 어디서든 접근이 가능
    - private : 클래스의 멤버, friend 클래스에서만 접근이 가능
    - protected : 상속된 클래스의 객체에서만 접근이 가능
*/

#include <iostream>
#include <string>

/*
class Student {
public : 
    void prt_info ();
    bool is_healthy (std::string name);
    
private : 
    std::string name;
    int weight;
    int height;
    std::string blood_type;
};

    이러면 student의 객체는
    public : prt_info(), is_healthy()
    private : name, weight, height, blood_type
    이다.
*/

class Student {
public : 
    std::string name;
    int weight;
    int height;
    // 만약 weight, height를 private으로 둔다면 정보은닉 에러가 걸릴거다
};

int main()
{
    Student lky;
    Student* lky_10y_ago = new Student(); // 객체를 힙 메모리에, 그리고 그 주소 저장
    
    lky.name = "lky";
    lky.height = 178;
    lky.weight = 65;
    
    lky_10y_ago->name = "lky";
    lky_10y_ago->height = 160;
    lky_10y_ago->weight = 40;
    
    std::cout << "지금" << std::endl;
    std::cout << lky.name << " | " << 
                 lky.height <<  " | " <<
                 lky.weight << std::endl;
                 
    std::cout << "10년 전" << std::endl;
                 
    std::cout << lky_10y_ago->name << " | " << 
                 lky_10y_ago->height <<  " | " <<
                 lky_10y_ago->weight << std::endl;
}

/*
    private 맴버에 접근하기 위해서는 public 맴버 함수가 필요
    정보은닉을 하지 않는다면 오류를 초래한다
    ex) 게임에서 플레이어의 체력이 100이 최대인데, 실수로 1000을 할당한다면?
*/
