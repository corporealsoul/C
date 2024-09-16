#include <stdio.h>

int main()
{
    int noone = 10;
    int notwo = 20;
    int nothree = 30;

    int nosum = noone + notwo;
    int nosub = noone - notwo;
    int nomul = noone * notwo;
    int nodiv = noone / notwo;
    int nomod = noone % notwo;
    int nopow = noone ^ notwo;

    printf("The Sum - %d \n", nosum);
    printf("The Sub - %d \n", nosub);
    printf("The Mul - %d \n", nomul);
    printf("The Div - %d \n", nodiv);
    printf("The Mod - %d \n", nomod);
    printf("The Pow - %d \n", nopow);

return 0;
}