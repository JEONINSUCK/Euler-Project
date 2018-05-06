#include<stdio.h>
#include<math.h>

void main()
{
	int i;
	int a = 0, b = 0;
	int aresult = 0;
	int bresult = 0;
	
	for (i = 0; i < 100; i++)
	{
		a = pow(i + 1, 2.0);

		aresult = aresult + a;
	}

	for (i = 1; i <= 100; i++)
	{
		b = b + i;
	}
	bresult = pow(b, 2.0);

	printf("%d\n",bresult- aresult);

	

}

