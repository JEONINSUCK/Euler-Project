#include<stdio.h>
#include<iostream>
#include<Windows.h>
const int limit = 2000000;

void main()
{
	
	bool *prime = new bool[limit + 1];
	long long sum = 0;
	int i;

	for (i = 2; i <= limit; i++)
	{
		prime[i] = true;
	}

	for (i = 2; i*i <= limit; i++)
	{
		if (prime[i])
		{
			for (int j = i*i; j <= limit; j += i) prime[j] = false;
		}
		//Sleep(500);
		//printf("%d       %d\n",i, prime[i]);
		

	}

	for (i = 2; i <= limit; i++)
	{
		if (prime[i] == 1)
		{
			sum = sum + i;
			printf("%lld\n", sum);
		}
	}


	
}