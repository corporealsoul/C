#include <stdio.h>
int c_recursion();
int c_recursion1();
int c_recursion2();
int c_recursion3();

int main() {
    c_recursion(4);
return 0;
}

int c_recursion(int n) {
    printf("Recusion ! : %d \n", n);
    c_recursion1(3);
return 0;
}

int c_recursion1(int n) {
    printf("Recusion ! : %d \n", n);
    c_recursion2(2);
return 0;
}

int c_recursion2(int n) {
    printf("Recusion ! : %d \n", n);
    c_recursion3(1);
return 0;
}

int c_recursion3(int n) {
    printf("Recusion ! : %d \n", n);
return 0;
}