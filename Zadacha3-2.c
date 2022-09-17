#include <stdio.h>
int main()
{
	float a, b;
	int k;
	k = 0;
	printf("Input a and b (a>b):");
	if (scanf_s("%f %f", &a, &b) != 2)
		printf("Wrong");
	else
	{
		while (a >= b)
		{
			a = a - b;
			k = k + 1;
		}
		printf("%d\n", k);
	}
	return 0;
}