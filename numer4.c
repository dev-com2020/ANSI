#include <stdio.h>

main()
{
    int c, nb, nt, nl;

    nb = 0;
    nt = 0;
    nl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++nb;
        else if (c == '\t')
            nt++;
        else if (c == '\n')
            ++nl;
    }
    printf("%d  %d  %d\n", nb, nt, nl);
}
// ^ XOR albo albo
// && and lub &
// || or lub |
// << przesunięcie w lewo
// >> przesunięcie w prawo
// ~ dopełnienie do jedności
// i = i + 2 zapis skrócony i += 2
// x *= y + 1 odpowiednik to x = x *(y + 1)

// wyr1 ? wyr2 : wyr3
// z = (a>b) ? a : b