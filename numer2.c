#include <stdio.h>

/*
wypisuje zestawienie temperatur Farh - Cels 
*/

main()
{
float fahr,celsius;
int lower,upper,step;

lower = 0;
upper = 300;
step = 20;


printf("Fahr     Celsius\n");
for (fahr = upper; fahr >= 0; fahr = fahr-20)
    printf("%3.0f     %6.1f\n",fahr, (5.0/9.0) * (fahr-32.0));
    
}