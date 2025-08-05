#include <stdio.h>

int main()
{
printf("\n");
	int randome_number = 24542, hold_random = randome_number;
	int loop;
	int last_digit = 1, reverse = 0;

	for (loop = 0; randome_number > 0; loop++)
	{
		last_digit = randome_number % 10;
		reverse = (reverse * 10) + last_digit;
		randome_number = randome_number / 10;
	}
	printf("\n");
	printf("%d", reverse);

	printf("\n");
	if (hold_random == reverse)
	{
		printf("Palindrome !");
	}
	else
	{
		printf("Not Palindrome !");
	}
	
printf("\n");
return 0;
}
