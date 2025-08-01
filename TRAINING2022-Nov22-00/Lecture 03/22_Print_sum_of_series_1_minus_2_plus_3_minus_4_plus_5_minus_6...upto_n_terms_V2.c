#include <stdio.h>
int main() {

    printf("\n");

    int LOOP = 1;
    int RANGE = 9;
    int STORE = 0;

    if (RANGE % 2 == 0) {
        STORE = -RANGE/2;
    }
    else {
        STORE = -RANGE/2 + RANGE;
    }

    printf("%d ", STORE);

    printf("\n");
    return 0;
}