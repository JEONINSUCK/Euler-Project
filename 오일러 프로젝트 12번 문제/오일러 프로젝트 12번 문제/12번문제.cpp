#include<stdio.h>

void main()
{
	int  i = 1, j;
	long long input = 0;
	long long sum = 0;
	long long tri = 0;
	int count = 1;

	
		while(count <=500)
		{
			count = 1;
			input = i*(i + 1) / 2;
			tri = input;
			for (j = 2; j <= input; j++)
			{
				if (tri % j == 0)
				{
					sum = 0;
					while (tri % j == 0)
					{
						tri = tri / j;
						sum++;
					}
				}
				count *= (sum + 1);
`			}
			printf("%d      %d \n", input, count);
			i++;
			
		
			//76576500
		}
		

	
}