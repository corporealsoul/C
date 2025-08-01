#include <stdio.h>
int main() {

    printf("\n");

    int LOOP;

    for (LOOP = 1 ; LOOP <= 100 ; LOOP++) {
        if (LOOP % 2 != 0) {
            continue;
        }
        printf("%d ", LOOP);
    }

    printf("\n");
    return 0;
}