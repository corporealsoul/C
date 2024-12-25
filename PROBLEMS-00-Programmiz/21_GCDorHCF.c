#include <stdio.h>

int main()
{
printf("\n\n");

	printf("WAPIC - to find the GCD of two Number !! \n\n");

	int i;
	int num_one = 24, num_two = 36;

	for (i = num_two; i > 0; i--)
	{
		if (num_one % i == 0 && num_two % i == 0)
		{
			printf("%d ", i);
			break;
		}
	}

printf("\n\n");
return 0;
}