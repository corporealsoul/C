#include <stdio.h>

int x = 5;

int DoSum();
int DoSum() {
    x = 4;
    printf("%d\n", x);
    return 0;
}

int main() {
    printf("%d\n", x);
    DoSum();
    printf("%d\n", x);
    return 0;
}