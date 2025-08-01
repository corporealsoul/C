#include <stdio.h>
int main() {

    printf("\n");

    int NUMBER = 12045;
    int REMAINDER;
    int STORE = 0;
    int LOOP = 0;


    while (NUMBER > 0) {
        REMAINDER = NUMBER % 10;
        STORE = STORE * 10 + REMAINDER;
        NUMBER = NUMBER / 10;

        LOOP ++;
    }
    printf("%d \n", STORE);
    printf("%d \n", LOOP);

    printf("\n");
    return 0;
}