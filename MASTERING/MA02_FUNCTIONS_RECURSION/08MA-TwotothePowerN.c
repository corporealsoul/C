#include <stdio.h>
void c_recursion(int);

int main() {
    c_recursion(6);
    return 0;
}

void c_recursion(int number) {

    if (number == 0)
    {
        return;
    }
    c_recursion(number - 1);
    printf("%d ", 2 * number);
}




