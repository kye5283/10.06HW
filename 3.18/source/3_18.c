#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float salesdollars;
	float salary;

	printf("Enter sales in dollars (-1 to end): ");
	scanf_s("%f", &salesdollars);
	if (salesdollars != -1)
	{
		salary = 200 + salesdollars * 0.09;
		printf("Salary is : $%.2f\n", salary);
	}
	if (salesdollars < 0)
		printf(" ");
	system("pause");
	return 0;

}