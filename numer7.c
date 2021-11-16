#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    int X;

    srand(time(NULL));
    X = rand() % 5 + 1;

    switch (X)
    {
    case 1:
        printf("Zmienna X jest rowna");
        printf(" 1\n");
        break;
    case 2:
        printf("Zmienna X jest rowna");
        printf(" 2\n");
        break;
    case 3:
        printf("Zmienna X jest rowna");
        printf(" 3\n");
        break;
    case 4:
        printf("Zmienna X jest rowna");
        printf(" 4\n");
        break;
    default:
        printf("Zmienna X jest rowna");
        printf(" 5\n");
        break;
    }
    
    return 0;
}

/*
() [] -> .                              od lewej do prawej
! ~ ++ -- + - * & (typ) sizeof          od prawej do lewej
* / %                                   od lewej do prawej
+ -                                     od lewej do prawej
<< >>                                   od lewej do prawej
< <= > >=                               od lewej do prawej
== !=                                   od lewej do prawej
&                                       od lewej do prawej
^                                       od lewej do prawej
|                                       od lewej do prawej
&&                                      od lewej do prawej
||                                      od lewej do prawej
?:                                      od prawej do lewej
= += -= /= %= &= ^= |= <<= >>=          od prawej do lewej
,                                       od lewej do prawej
*/
