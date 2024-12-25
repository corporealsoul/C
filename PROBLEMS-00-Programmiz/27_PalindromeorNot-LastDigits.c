#include <stdio.h>

int main()
{
printf("\n");
	int randome_number = 45020;
	int loop;
	int last_digit = 1;

	for (loop = 0; randome_number > 0; loop++)
	{
		last_digit = randome_number % 10;
		printf("%d ", last_digit);
		randome_number = randome_number / 10;
	}
	
printf("\n");
return 0;
}
