#include <stdio.h>
int DoSum(int);

int DoSum(int x) {
    return 5 + x;
}

int main() {
    int x = 10;
    printf("\n");
    printf("Got returned : %d", DoSum(x));
    printf("\n");
    return 0;
}