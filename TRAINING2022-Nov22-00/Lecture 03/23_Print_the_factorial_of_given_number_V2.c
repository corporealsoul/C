#include <stdio.h>
int main() {

    printf("\n");

    int LOOP;
    int NUMBER = 4;
    int STORE = 1;

    for (LOOP = 1; LOOP <= NUMBER; LOOP++) {
        STORE = STORE * LOOP;
    }

    printf("Factorial : %d", STORE);

    printf("\n");
    return 0;
}