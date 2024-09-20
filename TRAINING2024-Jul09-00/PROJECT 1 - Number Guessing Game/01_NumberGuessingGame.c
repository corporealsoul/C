#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

printf("\n");

    // Seed the random number generator with the current time
    srand(time(0));
    // Generate and print a random number between 1 and 100
    int random_number = (rand() % 100) + 1; 
    // printf("Random Number: %d\n", random_number);

    int gussed_number;
    int number_of_gusses = 0;


    do
    {
        printf("Guess the number : ");
        scanf("%d", &gussed_number);

        // number_of_gusses ++;


        if (gussed_number > random_number)
        {
            printf("You was %d more than the Random: \n", gussed_number - random_number);
        }
        else if (random_number > gussed_number)
        {
            printf("You was %d less than the Random: \n", random_number - gussed_number);
        }
        
    } while (gussed_number != random_number);

    // printf("You gussed the number in %d gusses \n", number_of_gusses);

printf("\n");
return 0;
}
