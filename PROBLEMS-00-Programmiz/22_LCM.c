#include <stdio.h>

int main()
{
printf("\n\n");

	printf("WAPIC - to find the LCM of two Number !!  \n\n");

	int number_one = 72, number_two = 120;
	int loop;
	
	for (  loop = 2; loop <= number_one * number_two; loop++)
	{
		if ((loop % number_one == 0) && (loop % number_two == 0))
		{
			printf("The LCM : %d", loop);
			break;
		}
	}
	
printf("\n\n");
return 0;
}