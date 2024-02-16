#include <iostream>

void star_for (int n);
void star_while (int n);
void star_do_while (int n);

int main()
{
    int n;
    std::cin >> n;

    star_for (n);
    std::cout << "-------------" << std::endl;

    star_while (n);
    std::cout << "-------------" << std::endl;

    star_do_while (n);
    
    return 0;
}

void star_for (int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }
}

void star_while (int n)
{
    int i = n, j;
    while (i > 0)
    {
        j = 0;

        while (j < i)
        {
            std::cout << '*';
            j += 1;
        }

        std::cout << '\n';
        i -= 1;
    }
}

void star_do_while (int n)
{
    int i = n, j;

    do {    
        j = 0;

        do {
            std::cout << '*';
            j += 1;
        } while (j < i);

        std::cout << '\n';
        i -= 1;
    } while (i > 0);
}