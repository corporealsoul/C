#include <stdio.h>

int main()
{
printf("\n");
	int bottom_line = 3, above_line = 25;
	int loop, inner_loop;
	

	for (loop = bottom_line; loop <= above_line; loop++)
	{
		int is_prime = 0;

		for (inner_loop = 2; inner_loop < loop; inner_loop++)
		{
			if (loop % inner_loop == 0)
			{
				is_prime = 1;
				break;
			}	
		}
		if (is_prime == 0)
		{
			printf("%d ", loop);
		}
	}
printf("\n");
return 0;
}
