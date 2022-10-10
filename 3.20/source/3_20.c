#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float hours, rate, salary,overtime;
	printf("Enter # of hours worked (-1 to end): ");
	scanf_s("%f", &hours);
	while (hours == -1)
	{
		return 0;
	}
	printf("Enter hourly rate of the worker ($00.00): ");
	scanf_s("%f", &rate);
	salary = hours * rate;
	if (hours <= 40)
	{
		printf("Salary is $%.2f\n", salary);
	}
	else if (hours > 40)
	{
		overtime = hours - 40;
		salary += overtime * rate / 2;
		printf("Salary is $%.2f\n", salary);
	}
	system("pause");
	return 0;
}