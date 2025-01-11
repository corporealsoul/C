// PS D:\GITRepos\C\TRAINING2018-Feb19-00>  gcc main.c variables.c -o main

#include <stdio.h>

extern int globalInt;
extern float globalFloat;
extern char globalChar;

int main() {

    printf("globalInt: %d\n", globalInt);
    printf("globalFloat: %.2f\n", globalFloat);
    printf("globalChar: %c\n", globalChar);

    return 0;
}
