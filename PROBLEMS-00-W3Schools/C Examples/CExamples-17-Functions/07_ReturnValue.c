#include <stdio.h>
int DoSum(int, int);

int DoSum(int x, int y) {
    int sum = x + y;
    return sum;
}

int main() {
    int x = 10, y = 20, sum;

    sum = DoSum(x, y);
    printf("%d\n", sum);

    return 0;
}