// miniproj 1. 데이터사이언스의 info 기능 구현 
// 평균, 최솟값, 최댓값, 중앙값
// 동적 할당, inline function, 포인터 사용

// 중앙값 정렬 시에 algorithm 헤더 사용

#include <iostream>
#include <algorithm>
// https://blog.naver.com/ndb796/221227975229

inline double cal_mean(double *feature_ptr, int size=0);
inline double cal_min(double *feature_ptr, int size=0);
inline double cal_max(double *feature_ptr, int size=0);
inline double cal_mid(double *feature_ptr, int size=0);

int main()
{
    double *feature_ptr = nullptr; 
    int size = 0;
    
    std::cout << "feature의 사이즈 : ";
    std::cin >> size;
    
    feature_ptr = new double[size];
    
    double compo = 0;
    
    for (int i = 0; i < size; i++)
    {
        std::cout << "compo 입력 (NOT NULL) : ";
        std::cin >> compo;
        
        feature_ptr[i] = compo;
    }
    
    for (int j = 0; j < size; j++)
    {
        std::cout << j << " | " << *(feature_ptr + j) << " " << feature_ptr + j << std::endl;
    }
    
    std::cout << "count : " << size << std::endl;
    std::cout << "mean : " << cal_mean(feature_ptr, size) << std::endl;
    std::cout << "min : " << cal_min(feature_ptr, size) << std::endl;
    std::cout << "max : " << cal_max(feature_ptr, size) << std::endl;
    std::cout << "mid : " << cal_mid(feature_ptr, size) << std::endl;
    
    delete [] feature_ptr;
    feature_ptr = nullptr;
    
    return 0;
}

inline double cal_mean(double *feature_ptr, int size)
{
    double suma = 0;
    
    for (int i = 0; i < size; i++)
    {
        suma += *(feature_ptr + i);
    }
    
    return suma / size;
}

inline double cal_min(double *feature_ptr, int size)
{
    double min = *feature_ptr;
    
    for (int i = 1; i < size; i++)
    {
        if (min > *(feature_ptr + i))
        {
            min = *(feature_ptr + i);
        }
    }
    
    return min;
}

inline double cal_max(double *feature_ptr, int size)
{
    double max = *feature_ptr;
    
    for (int i = 1; i < size; i++)
    {
        if (max < *(feature_ptr + i))
        {
            max = *(feature_ptr + i);
        }
    }
    
    return max;
}

inline double cal_mid(double *feature_ptr, int size)
{
    std::sort(feature_ptr, feature_ptr + size);
    
    if (size % 2 == 0) // 짝수면
    {
        return (feature_ptr[(int)(size/2) - 1] + feature_ptr[(int)(size/2)]) / 2;
    }
    
    else 
    {
        return feature_ptr[size/2];
    }
}
