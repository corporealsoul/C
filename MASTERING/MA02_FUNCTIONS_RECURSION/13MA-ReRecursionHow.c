#include <stdio.h>
int c_recursion();
int c_recursion1();
int c_recursion2();
int c_recursion3();

int main() {
    c_recursion();
return 0;
}

int c_recursion() {
    printf("Recusion ! \n");
    c_recursion1();
return 0;
}

int c_recursion1() {
    printf("Recusion ! \n");
    c_recursion2();
return 0;
}

int c_recursion2() {
    printf("Recusion ! \n");
    c_recursion3();
return 0;
}

int c_recursion3() {
    printf("Recusion ! \n");
return 0;
}