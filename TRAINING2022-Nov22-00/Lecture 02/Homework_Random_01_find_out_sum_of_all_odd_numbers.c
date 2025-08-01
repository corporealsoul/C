#include <stdio.h>
int main() {

    int NUMBER = 0;
    printf("\n");

    for (int loop = 1; loop <= 10; loop = loop +2) {
        NUMBER = NUMBER + loop;
    }
    printf("The sum : %d", NUMBER);

    printf("\n");
    return 0;
}