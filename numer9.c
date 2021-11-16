#include <stdio.h>
#include "nazwa.exe"

// #if SYSTEM == SYSV
//     #define HDR "sysv.h"

#define max(A,B)  ((A) >(B) ? (A):(B))






/*
wypisuje zestawienie temperatur Farh - Cels w funkcji
*/
float celsius(register float fahr);
static atrapa();

main()
{
    static float fahr;
    register int lower, upper, step;
    int dni[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        printf("%3.0f     %6.1f\n", fahr, celsius(fahr));
        fahr = fahr + step;
    }
}
float celsius(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}

atrapa()
{
    printf("Ojojo!");
}
