#include <stdio.h>

int main() {
    int number;

    // Clear input buffer before getting input
    while ((getchar()) != '\n');

    printf("Enter a number: ");

    // Better input validation
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    // Using more meaningful variable names and constants
    const int MIN_THREE_DIGIT = 100;
    const int MAX_THREE_DIGIT = 999;

    if (number >= MIN_THREE_DIGIT && number <= MAX_THREE_DIGIT) {
        printf("%d is a three-digit number.\n\n", number);
    } else {
        printf("%d is not a three-digit number.\n\n", number);
    }

    return 0;
}




// #include <stdio.h>
//
// int main() {
//     int number;
//     printf("Enter a number: ");
//     int result = scanf("%d", &number);
//     printf("%d \n", result);
//
//     return 0;
// }