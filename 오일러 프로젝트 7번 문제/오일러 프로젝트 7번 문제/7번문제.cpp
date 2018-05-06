#include<stdio.h>

void main()
{
	long long arr[10005];
	long long i, j, a = 0;
	
	for (i = 2; i < 150000; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			arr[a] = i;
			a++;
		}
		if (a == 10005)
			break;
		
	}
		printf("%d\n", arr[10000]);

}
