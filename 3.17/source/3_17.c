#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int accoutnum;
	float beginningbalance;
	float totalcharges;
	float totalcredits;
	float creditlimit;
	float newbalance;

	printf("Enter accout number(-1 to end): ");
	scanf_s("%d", &accoutnum);
	while (accoutnum == -1)
	{
		return 0;
	}
	printf("Enter beginning balance: ");
	scanf_s("%f", &beginningbalance);
	printf("Enter total charges: ");
	scanf_s("%f", &totalcharges);
	printf("Enter total credits: ");
	scanf_s("%f", &totalcredits);
	printf("Enter credit limit: ");
	scanf_s("%f", &creditlimit);
	newbalance = beginningbalance + totalcharges - totalcredits;
	
	if ((newbalance > creditlimit) && (accoutnum != -1))
	{
		printf("Account:%9d\n", accoutnum);
		printf("Credit limit: %.2f\n", creditlimit);
		printf("Balance: %12.2f\n", newbalance);
		printf("Credit Limit Exceeded.\n");
	}
	
		
	
	system("pause");
	return 0;
}
