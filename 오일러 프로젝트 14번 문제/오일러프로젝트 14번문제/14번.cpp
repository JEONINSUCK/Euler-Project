#include<stdio.h>



void main()
{
	int i,j = 0;
	int count = 0;
	int max = 0;
	long long result = 0;
	int mnum = 0;
	for (i = 2; i <= 1000000; i++)
	{
		result = i;
		count = 0;
		while (result != 1)
		{
			
			if (result % 2 == 0)
			{
				result = result / 2;
			}
			else
			{
				result = (3 * result) + 1;
			}
			count++;
		}


		if (max < count)
		{
			max = count;
			mnum = i;
			printf("%d    %d\n", mnum, max);

		}
	}
	
	

}