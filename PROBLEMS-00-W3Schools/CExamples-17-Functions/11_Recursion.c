#include <stdio.h>

int DoSum(int);

int DoSum(int no) {
    if (no > 0) {
        return no + DoSum(no - 1);
    }
return 0;
}

int main() {
    int result;
    result = DoSum(10);
    printf("%d\n", result);
    return 0;
}