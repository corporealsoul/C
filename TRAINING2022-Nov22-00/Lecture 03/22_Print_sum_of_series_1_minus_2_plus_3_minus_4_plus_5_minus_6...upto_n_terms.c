#include <stdio.h>
int main() {

    printf("\n");

    int LOOP = 1;
    int RANGE = 7;
    int STORE = 0;

    while (LOOP <= RANGE) {
        if (LOOP % 2 != 0)
            STORE = STORE + LOOP;
        else
            STORE = STORE - LOOP;

        LOOP = LOOP + 1;
    }
    printf("%d ", STORE);

    printf("\n");
    return 0;
}