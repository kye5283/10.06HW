#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	float salary;
	float hours, hourlyrate,  overtime;
	float salesdollars ;
	float product,productrate;
	printf("Who's salayry: ");
	scanf_s("%d", &num);
	switch (num)
	{
	case 1:
		printf("Enter the fixed weekly salary of manager : ");
		scanf_s("%f", &salary);
		printf("Manager's weekly salary is: $%.2f\n", salary);
		break;
	case 2:
		printf("Enter # of hours worked this week: ");
		scanf_s("%f", &hours);
		printf("Enter hourly rate of the worker: ");
		scanf_s("%f", &hourlyrate);
		salary = hours * hourlyrate;
		if (hours <= 40)
		{
			printf("Hourly worker's weekly salary is $%.2f\n", salary);
		}
		else if (hours > 40)
		{
			overtime = hours - 40;
			salary += overtime * hourlyrate / 2;
			printf("Hourly worker's weekly salary is $%.2f\n", salary);
		}
		break;
	case 3:
		printf("Enter week sales in dollars : ");
		scanf_s("%f", &salesdollars);
		salary = 250.00 + salesdollars * 0.057;
		printf("Commission worker's weekly salary is : $%.2f\n", salary);
		break;
	case 4:
		printf("Enter how many poducts are made this week: ");
		scanf_s("%f", &product);
		printf("Enter rate of the product: ");
		scanf_s("%f", &productrate);
		salary = product * productrate;
		printf("Pieceworker's weekly salary is $%.2f\n", salary);
		break;
	}

	system("pause");
	return 0;
}