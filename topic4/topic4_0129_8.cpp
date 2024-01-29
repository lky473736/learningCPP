/* 
    헤더파일에 클래스를 선언,
    cpp파일에 클래스를 구현
*/

#include "Account.h"

void setter_name (std::string student_name)
{
    name = student_name;
}

std::string getter_name()
{
    return name;
}
