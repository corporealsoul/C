#include <stdio.h>

int globalInt = 10;

int main() {

    extern int globalInt;

    printf("globalInt: %d\n", globalInt);

    return 0;
}
