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
				printf("%d������\n", year);
			}
			else
			{
				printf("%d��������\n", year);
			}
		}
		else 
		{
			printf("%d��������\n", year);
		}
		year++;
		/*
		if (year % 4 == 0&&year%100!=0)
		{
			printf("%d������\n", year);
		}
		else 
		{
			printf("%d��������\n", year);
		}
		year++;*/
	}
	return 0;
}