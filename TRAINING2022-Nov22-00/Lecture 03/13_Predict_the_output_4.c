#include <stdio.h>
int main() {

    printf("\n");

    int x = 4, y, z;

    y = --x;
    z = x--;

    printf("\n%d %d %d", x, y, z);

    printf("\n");
    return 0;
}