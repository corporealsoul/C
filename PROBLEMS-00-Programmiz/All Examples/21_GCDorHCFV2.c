#include <stdio.h>

int main()
{
printf("\n\n");

	printf("WAPIC - to find the GCD of two Number !!  \n\n");

	int number_one = 24, number_two = 36;
	int loop;
	int hcf = 1;

	for (loop = 1; loop <= number_one && loop <= number_two; loop++)
	{
		if ((number_one % loop == 0) && (number_two % loop == 0))
		{
			hcf = loop;
		}	
	}
	printf("The GCD  : %d", hcf);
printf("\n\n");
return 0;
}