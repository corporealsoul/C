#include <stdio.h>
#include <math.h>

int main()
{
printf("\n");
	int base_number = 2, power_number = 4;
	int loop;
	int store;

	store = pow(base_number, power_number);

	printf("Calculated value : %d", store);

printf("\n");
return 0;
}

// [anup@W-PF4QK15A 11:29:20 Programiz]$ gcc ./26_PowerofaNumberV3.c -lm