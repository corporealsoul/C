#include <stdio.h>
int main() {

    printf("\n");

    int NUMBER = 12045;
    int REMAINDER;
    int STORE = 0;
    int LOOP;

    for (LOOP = 0; NUMBER != 0; LOOP = LOOP + 1) {
        REMAINDER = NUMBER % 10;
        STORE = STORE * 10 + REMAINDER;

        NUMBER = NUMBER / 10;
    }
    printf("%d \n", STORE);
    printf("%d \n", LOOP);

    printf("\n");
    return 0;
}