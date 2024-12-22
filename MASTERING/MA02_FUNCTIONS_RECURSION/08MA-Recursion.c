#include <stdio.h>

int c_recursion(int number) {
    if (number == 0)
    {
        return 0;
    }
    c_recursion(number - 1);
    printf("%d ", number);
}

int main() {
    c_recursion(5);
    return 0;
}
