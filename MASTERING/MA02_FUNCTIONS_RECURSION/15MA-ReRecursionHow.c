#include <stdio.h>
void c_recursion(int);


int main() {
    c_recursion(1);
return 0;
}

void c_recursion(int n) {
    if (n == 4)
    {
        printf("Recusion ! : %d \n", n);
        return;
    }
    printf("Recusion ! : %d \n", n);
    c_recursion(n + 1);
}
