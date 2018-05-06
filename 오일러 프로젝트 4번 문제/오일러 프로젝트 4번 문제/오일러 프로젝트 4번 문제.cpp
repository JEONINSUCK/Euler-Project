#include<stdio.h>


void main()
{
	int i, j;
	int result=0;
	int num;

	for (i = 700; i < 1000; i++)
	{
		for (j = 700; j < 1000; j++)
		{
			num = i*j;
			if (num / 100000 == num % 10 && (num / 10000) % 10 == (num % 100) / 10 && (num / 1000) % 10 == (num % 1000)/100)
			{
			result = num;
			}
		}
	}
	printf("%d\n", result);
}