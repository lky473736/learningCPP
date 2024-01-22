// 배열에서의 동적 할당

#include <iostream>

int main()
{
    int *arr_ptr = nullptr;
    int size = 0;
    
    std::cout << "배열 사이즈 입력 : ";
    std::cin >> size;
    
    arr_ptr = new int[size];
    // int를 담을 수 있는 특정 사이즈의 배열을 heap에서 선언
    // heap 영역에서의 주소값을 반환
    
    int compo = 0;
    
    for (int i = 0; i < size; i++)
    {
        std::cout << i+1 << "번째 값 입력 : ";
        std::cin >> compo;
        
        arr_ptr[i] = compo;
        // index를 사용하여 접근 가능 (배열을 선언했으니깐)
    }
    
    for (int j = 0; j < size; j++)
    {
        std::cout << j << " | " << *(arr_ptr + j) << " " << arr_ptr + j << std::endl;
    }
    
    delete [] arr_ptr;
    // 동적 할당된 배열의 메모리 해제 
    
    arr_ptr = nullptr;
    
    return 0;
}
