#include <stdio.h>

int main()
{

    int X;

    srand(time(NULL));
    X = rand();

    printf("X ma wartosc %d, zatem\n", X);

    if (X % 2 == 0)
        printf("X to liczba parzysta.\n");
    else if (X % 3 == 0)
        printf("X jest podzielna przez 3\n");
    else
    {
        printf("X nie jest podzielne prez 3,\n");
        printf("ale nie jest tez podzielne przez 2");
    }

    return 0;
}