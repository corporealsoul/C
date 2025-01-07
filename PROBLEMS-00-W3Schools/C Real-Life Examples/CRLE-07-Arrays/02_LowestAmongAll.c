#include<stdio.h>

int main()
{
printf("\n\n");
    // An array storing different ages
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);

    // Create a variable and assign the first array element of ages to it
    int lowestAge = ages[0];

    // Loop through the elements of the ages array to find the lowest age
    for (int i = 0; i < length; i++) {
        if (lowestAge > ages[i]) {
            lowestAge = ages[i];
        }
    }
    printf("The lowest age is: %d\n", lowestAge);
printf("\n\n");
return 0;
}