#include <stdio.h>

int primeFunction(int);

int main()
{
printf("\n");
	int base = 2, limit = 20, outerLoop, primeFlag;

	for (outerLoop = base + 1; outerLoop < limit; outerLoop++) {
		primeFlag = primeFunction(outerLoop);

		if (primeFlag == 1) {
			printf("%d ", outerLoop);
		}
	}

printf("\n");
return 0;
}


int primeFunction(int outerLoop){
	int inerLoop, primeFlag = 1;
	for (inerLoop = 2; inerLoop <= outerLoop / 2; inerLoop++) {
		if (outerLoop % inerLoop == 0) {
			primeFlag = 0;
			break;
		}
	}
	return primeFlag;
}
