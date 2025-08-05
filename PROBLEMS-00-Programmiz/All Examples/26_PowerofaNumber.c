#include <stdio.h>

int main()
{
printf("\n");
	int base_number = 2, power_number = 4;
	int loop;
	int store = 1;

	for (loop = 1; loop <= power_number; loop++)
	{
		store = store * base_number;
	}
	printf("Calulated value : %d", store);


printf("\n");
return 0;
}