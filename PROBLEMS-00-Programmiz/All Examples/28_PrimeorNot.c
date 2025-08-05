#include <stdio.h>

int main()
{
printf("\n");
	int randome_number = 7;
	int loop;
	int flag = 0;

	for (loop = 2; loop < randome_number; loop++)
	{
		if (randome_number % loop == 0)
		{
			printf("Not Prime !");
			break;
		}
		else
		{
			flag = 1;
		}
	}
	if (flag == 1)
	{
		printf("Prime !");
	}
	
printf("\n");
return 0;
}
