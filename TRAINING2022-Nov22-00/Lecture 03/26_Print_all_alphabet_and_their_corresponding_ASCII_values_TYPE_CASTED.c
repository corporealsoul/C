#include <stdio.h>

int main() {

    char CHAR_A = 'A';
    char CHAR_Z = 'Z';

    int LOOP;

    printf("\n");

    LOOP = CHAR_A;

    while (LOOP <= CHAR_Z){
        printf("ASCII of %c is : %d \n", LOOP, LOOP);
        LOOP ++;
    }

    printf("\n");
    return 0;
}