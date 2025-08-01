#include <stdio.h>
int main() {

    printf("\n");

    int NUMBER = 12000;
    int LOOP;

    for (LOOP = 0; NUMBER > 0; LOOP = LOOP + 1) {
        printf("%d \n", LOOP);
        NUMBER = NUMBER / 10;
    }
    printf("Number of digits : %d \n", LOOP);

    printf("\n");
    return 0;
}