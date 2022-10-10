#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k;
	printf("(A)\n");
	for (i = 1; i <=10; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	printf("(B)\n");
	for (i = 10; i > 0; i--)
	{
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
	printf("(C)\n");
	for (i = 10; i > 0; i--)
	{
		for (k = 10 - i; k > 0; k--)
			printf(" ");
		for(j=i;j>0;j--)
			printf("*");
		printf("\n");
	}
	printf("(D)\n");
	for (i = 1; i <= 10; i++)
	{
		for (k = 10 - i; k > 0; k--)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}