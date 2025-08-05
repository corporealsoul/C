#include <stdio.h>

int main()
{
printf("\n");
	
	int lower_limit = 10, upper_limit = 999;
	int remainder;
	int loop, i;

	for (loop = lower_limit; loop < upper_limit; loop++)
	{
		int which_number = loop;
		int temporary = loop;
		int store = 0;

		for (i = 0; which_number > 0; i++)
		{
			remainder = which_number % 10;
			store = store + (remainder * remainder * remainder);

			which_number = which_number / 10;
		}

		if (store == temporary)
		{
			printf("%d : Is an Armstrong Number\n", temporary);
		}
	}

printf("\n");
return 0;
}
