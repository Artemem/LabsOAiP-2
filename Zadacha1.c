#include <stdio.h> 
int main()
{
	int y=1626;
	double m = 20;
	while (y <= 2022)
	{
		m = m * (1 + 0.2);
		y=y+1;
	}
	printf_s("%0.1f", m);
	return 0;
}   