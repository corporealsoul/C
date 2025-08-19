#include<stdio.h>

int main()
{
    char LOOP;
    char CHOICE;

    printf("\n");

    printf("Enter u to display uppercase alphabets.\n");
    printf("Enter l to display lowercase alphabets. \n\n");
    printf("Your choice : ");
    scanf("%c", &CHOICE);

    if (CHOICE == 'u') {
        for (LOOP = 'A' ; LOOP <= 'Z' ; LOOP++) {
            printf("%c ", LOOP);
        }
    }
    else {
        for (LOOP = 'a' ; LOOP <= 'z' ; LOOP++) {
            printf("%c ", LOOP);
        }
    }

    printf("\n");
    return 0;
}
