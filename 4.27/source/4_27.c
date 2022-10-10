#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hypotenuse, side, side2;
	for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++)
	{
		for (side = 1; side <= 500; side++)
		{
			for (side2 = 1; side2 <= 500; side2++)
			{
				if ((hypotenuse*hypotenuse) == (side*side) + (side2*side2))
					printf("%3d%7d%11d\n", hypotenuse, side, side2);
			}
		}
	}
	system("pause");
	return 0;
}