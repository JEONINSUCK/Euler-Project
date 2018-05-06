#include<stdio.h>


int cal(int num[1024],int a)
{
	int b = a;
	int temp = 0;

	for (;;)
	{
		if (num[b] >= 10)
		{
			temp = num[b];
			
			
			if (b == 0)
			{
				num[b] = temp / 10;
				num[b + 1] = num[b + 1] + temp;
			}
			else
			{
				temp = temp % 10;
				num[b - 1] = num[b - 1] + temp;
			}
		}
		if (num[b] <= 10)
			return *num;
		b++;
	}

}



int re(int num[1024])
{
	int a;
	int c;
	for (a = 0; num[a] != 0; a++)
	{
		num[a] *= 2;
		if (num[a] >= 10)
		{
			c = cal(num,a);
			return *num;
		}
	}

	return *num;
}



void main()
{
	int num[1024] = { 0, };
	int i;
	
	num[0] = 2;

	for (i = 0; i < 1000; i++)
	{
		re(num);
			
		
	}
}