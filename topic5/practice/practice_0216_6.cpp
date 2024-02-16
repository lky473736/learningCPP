#include <iostream>

void swapArr (int* p, int* q, int size);
void printArr (int* p, int size);

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {9, 8, 7, 6, 5};

    printArr (a, 5);
    printArr (b, 5);

    swapArr (a, b, 5);

    printArr (a, 5);
    printArr (b, 5);

    return 0;
}

void swapArr (int* p, int* q, int size)
{
    int temp;

    for (int i = 0; i < size; i++)
    {
        temp = *p;
        *p = *q;
        *q = temp;

        p += 1;
        q += 1;
    }
}

void printArr (int* p, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << *(p + i) << ' ';
    }
    std::cout << std::endl;
}