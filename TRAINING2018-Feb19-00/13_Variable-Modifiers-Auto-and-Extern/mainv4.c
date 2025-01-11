#include <stdio.h>

extern int globalInt = 10;

int main() {

    printf("globalInt: %d\n", globalInt);

    return 0;
}
