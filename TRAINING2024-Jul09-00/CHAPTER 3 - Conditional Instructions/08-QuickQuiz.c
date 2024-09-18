#include <stdio.h>

int main() {

    int integer_choice;

    printf("\n");

    printf("Enter choice : ");
    scanf("%d", &integer_choice);

    if (integer_choice >= 90 && integer_choice <=100)
    {
        printf("Grade A");
    }
    
    else if (integer_choice >= 80 && integer_choice <=90)
    {
        printf("Grade B");
    }

    else if (integer_choice >= 70 && integer_choice <=80)
    {
        printf("Grade C");
    }

    else if (integer_choice >= 60 && integer_choice <=70)
    {
        printf("Grade D");
    }

    else if (integer_choice >= 50 && integer_choice <=60)
    {
        printf("Grade E");
    }

    else
    {
        printf("Failed !");
    }

    printf("\n");

return 0;
}