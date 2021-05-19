#include<stdio.h>
int main()
{
	int year = 2000, i = 1;
	while (year<=2500)
	{
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d是闰年\n", year);
			}
			else
			{
				printf("%d不是闰年\n", year);
			}
		}
		else 
		{
			printf("%d不是闰年\n", year);
		}
		year++;
		/*
		if (year % 4 == 0&&year%100!=0)
		{
			printf("%d是闰年\n", year);
		}
		else 
		{
			printf("%d不是闰年\n", year);
		}
		year++;*/
	}
	return 0;
}