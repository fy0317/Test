#include<stdio.h>

int main()
{
	int i = 1;
	float sum = 0.0;
	while (i <= 100)
	{
		if (i % 2 == 0)
		{
			sum = sum - 1.0 / i;
		}
		else
		{
			sum = sum + 1.0 / i;
		}
		i++;
	}
	printf("1-1/2+1/3-1/4...+1/99-1/100=%f\n", sum);
}