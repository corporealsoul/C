#include <stdio.h>

int main()
{
printf("\n");
	int which_number = 153, temporary = which_number;
	int store = 0, remainder;
	int i;

	for (i = 0; which_number > 0; i++)
	{
		remainder = which_number % 10;
		store = store + (remainder * remainder * remainder);

		which_number = which_number / 10;
	}
	printf("Original Number : %d\n", temporary);
	printf("Calculated Number : %d\n", store);
	printf("\n");
	
	if (store == temporary)
	{
		printf("%d : Is an Armstrong Number\n", temporary);
	}
	else
	{
		printf("%d : Not an Armstrong Number\n", temporary);
	}
	
printf("\n");
return 0;
}
