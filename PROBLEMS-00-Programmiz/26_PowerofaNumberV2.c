#include <stdio.h>

int main()
{
printf("\n");
	int base_number = 2, power_number = 4;
	int loop;
	int store = 1;

	while (power_number != 0)
	{
		store = store * base_number;
		power_number --;
	}
	printf("Calculated value : %d", store);

printf("\n");
return 0;
}