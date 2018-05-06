#include<stdio.h>
#include<iostream>
#include<Windows.h>

void main()
{
	int *num;
	num = (int*)malloc(2000000 * sizeof(int));
	int i, j;
	int a = 0;
	long long sum = 17;
	for (i = 2; i < 2000000; i++)
	{
		if (i % 2 == 0 || i%3==0 || i%5 == 0 || i%7==0)
			continue;

		for (j = 2; j <= i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
	


		if(i == j)
		{
			sum = sum + i;
			//Sleep(500);
			printf("%d      %lld \n", i, sum);
		}
		
	}

	
}