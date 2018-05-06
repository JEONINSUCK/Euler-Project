#include<stdio.h>

int cal(int num[1024], int a)
{
	int temp = 0;
	int b;

	for (b = a;;)
	{
		if (num[b] > 9)
		{
			temp = num[b];
			num[b - 1] += temp / 10;
			num[b] = temp % 10;
			
		}
		return *num;
	}
	
}

int mul(int num[1024])
{
	int a;
	int result = 0;

	for (a = 0; a<1024; a++)
	{
		if (num[a] != 0)
		{
			num[a] *= 2;

			if (num[a] > 9)
			{
				cal(num, a);
			}
		}
	}
	return *num;
}

void main()
{
	int num[1024] = { 0, };
	int i;
	int result = 0;
	
	num[1023] = 2;

	for (i = 0; i <999; i++)
	{
		mul(num);
		
	}

	for (i = 0; i < 1024; i++)
	{
		result += num[i];
		printf("%d\n", result);
	}
}