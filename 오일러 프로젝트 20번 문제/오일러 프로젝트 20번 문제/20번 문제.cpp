#include<stdio.h>	



int mul(int num[1024], int i)
{
	int a;
	int result = 0;
	int j = i;
	for (a = 0; a<800; a++)
	{
		num[a] *= j;
	}

	for (a = 799; a>=0; a--)
	{
		if (num[a] >= 100)
		{
			num[a - 2] += num[a] / 100;
			num[a - 1] += (num[a] / 10) % 10;
			num[a] = num[a] % 10;
		}
		else if (num[a] >= 10)
		{
			num[a - 1] += num[a] / 10;
			num[a] = num[a] % 10;
		}
	}
	return *num;
}

void main()
{
	int num[800] = { 0, };
	int i;
	int result = 0;

	num[799] = 1;

	for (i = 1; i<=100; i++)
	{
		mul(num,i);

	}

	for (i = 0; i < 800; i++)
	{
		result += num[i];
		printf("%d\n", result);
	}
}