#include <stdio.h>

int main() {
    int FST_NUMBER, SCND_NUMBER;
    int ADDITION;
    printf("\n");

    printf("Enter 1st Number : ");
    scanf("%d", &FST_NUMBER);

    printf("Enter 2nd Number : ");
    scanf("%d", &SCND_NUMBER);

    ADDITION = FST_NUMBER + SCND_NUMBER;
    printf("Addition : %d", ADDITION);

    printf("\n\n");
    return 0;
}