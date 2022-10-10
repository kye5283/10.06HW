#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float principal, rate,interest;
	int days;
	printf("Enter loan principal (-1 to end): ");
	scanf_s("%f", &principal);
	while (principal == -1)
	{
		return 0;
	}
	printf("Enter linterest rate: ");
	scanf_s("%f", &rate);
	printf("Enter term of the loan days: ");
	scanf_s("%d", &days);
	interest = principal * rate*days / 365;
	printf("The interest charge is $%.2f\n", interest);
	system("pause");
	return 0;
}