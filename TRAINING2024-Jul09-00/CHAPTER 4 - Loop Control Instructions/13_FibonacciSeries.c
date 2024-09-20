#include <stdio.h>

int main() {

    int range;
    int loop;
    int term_one = 0, term_two = 1, next_term;

printf("\n");

    printf("Enter range : ");
    scanf("%d", &range);

    printf("Fibonacci Series : %d, %d", term_one, term_two);

    for (loop = 0; loop < range; loop++)
    {
        next_term = term_one + term_two;
        printf(", %d", next_term);

        term_one = term_two;
        term_two = next_term;
    }
    
printf("\n\n");
return 0;
}
