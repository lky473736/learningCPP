/* 
    헤더파일에 클래스를 선언,
    cpp파일에 클래스를 구현
*/

#ifndef _ACCOUNT_H_ // 만약 _ACCOUNT_H_라는 헤더가 없다면
#define _ACCOUNT_H_ // 아래와 같은걸 만들어라

class Student
{
public : 
    void setter_name (std::string student_name);
    std::string getter_name();
    
private :
    std::string name;
};

#endif

/*
    include guard는 여기서 ifnder, define, endif이다. 
    중복적인 헤더파일의 선언을 방지하기 위해서다
*/
