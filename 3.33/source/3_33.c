#include <stdio.h>
#include <stdlib.h>

	int main()
	{
		int length =0, breadth = 0;
		printf("length=");
		scanf_s("%d", &length);
		printf("breadth=");
		scanf_s("%d", &breadth);

		for (int i = 1; i <= length; i++)
		{
			for (int j = 1; j <= breadth; j++)
			{
				if ((i == 1) || (i == length) || (j == 1) || (j == breadth))
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
		return 0;
	}
