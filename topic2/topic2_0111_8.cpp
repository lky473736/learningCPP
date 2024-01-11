/*
    default argument (기본값)
    
    - 함수의 선언에서 정의한 모든 매개변수가 전달되어야 하는 것이 원칙
    - 하지만 기본 인수를 사용하면 인수가 주어지지 않을 시 default argument를 사용하도록 정의가 가능하다
    - 기본값은 prototype or 정의부에 선언한다 (동시에 선언하지 않으며 한 곳에서만 선언하는게 원칙)
    - 기본값 선언은 오른쪽부터가 원칙
*/

#include <iostream>

double calc_cost (double base_cost, double tax_rate = 0.06, double shipping = 3.5); // 물건값, 세금비율, 배송비
// 위에서 default argument는 tax_rate, shipping
// default argument자리가 비어있으면 위와 같은 값으로 자동 정의됨

int main()
{
    double cost = 0;
    
    cost = calc_cost(100.0, 0.08, 4.5);
    std::cout << cost << std::endl;
    
    cost = calc_cost(100.0, 0.08); // shipping은 자동으로 3.5
    std::cout << cost << std::endl;
    
    cost = calc_cost(200.0); // tax_rate, shipping은 자동으로 0.06, 3.5
    std::cout << cost << std::endl;
    
    return 0;
}

double calc_cost (double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}
