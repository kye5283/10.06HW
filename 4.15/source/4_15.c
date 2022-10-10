#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	unsigned int year;
	float amount, principal=5000.00, rate;

	for (rate = 0.1; rate <= 0.12; rate += 0.05)
	{
		printf("Compound interest with rate %.2f\n",rate);
		printf("%4s%21s\n", "Year", "Amount on deposit");
		for (year = 1; year <= 15; year++)
		{
			amount = principal * pow((1.0 + rate), year);
			printf("%3d%18.2f\n", year,amount);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}