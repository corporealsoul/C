#include <stdio.h>

int main()
{
printf("\n\n");

	printf("WAPIC - to find the GCD of two Number !!  \n\n");

	int number_one = 24, number_two = 36;
	
	while (number_one != number_two)
	{
		if (number_one > number_two)
		{
			number_one = number_one - number_two;
		}
		else
		{
			number_two = number_two - number_one;
		}
	}
	
printf("\n\n");
return 0;
}