#include <stdio.h>

int main() {

    char CHAR_A = 'A';
    char CHAR_Z = 'Z';

    int LOOP;


    printf("\n");

    for (LOOP = CHAR_A ; LOOP <= CHAR_Z ; LOOP = LOOP + 1) {
        printf("ASCII of %c is : %d \n", LOOP, LOOP);
    }

    printf("\n");
    return 0;
}