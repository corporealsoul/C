#include <stdio.h>

int main()
{
printf("\n");
	int randome_number = 245421, hold_random = randome_number;
	int loop;
	int last_digit = 1, reverse = 0;

	while (randome_number != 0)
	{
		last_digit = randome_number % 10;
		reverse = (reverse * 10) + last_digit;
		randome_number = randome_number / 10;
	}
	
	printf("\n");
	printf("Reveres value : %d", reverse);

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
