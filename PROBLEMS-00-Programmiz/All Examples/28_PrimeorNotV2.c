#include <stdio.h>

int main()
{
printf("\n");
	int randome_number = 6;
	int loop;
	int flag = 0;

	for (loop = 2; loop < randome_number; loop++)
	{
		if (randome_number % loop == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("Not Prime !");
	}
	else
	{
		printf("Prime !");
	}
	
printf("\n");
return 0;
}
