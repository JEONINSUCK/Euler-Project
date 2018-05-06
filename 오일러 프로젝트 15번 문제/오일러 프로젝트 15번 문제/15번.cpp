#include<stdio.h>	
#include<string.h>

void main()
{
	int i, j,a = 0;
	long long input[21][21] = { {0,} };
	long long x = 0, y = 0;

	

	
		for (j = 1; j < 21; j++)
		{
			i = 0;
			input[i][j] = 1;
		}
		for (i = 1; i < 21; i++)
		{
			j = 0;
			input[i][j] = 1;
		}

		for (i = 0; i < 20; i++)
		{
			for (j = 1; j < 21; j++)
			{
				input[i+1][j] = input[i][j] + input[i+1][a];
				a++;
			}
			a = 0;
		}
		printf("%lld\n", input[20][20]);
}