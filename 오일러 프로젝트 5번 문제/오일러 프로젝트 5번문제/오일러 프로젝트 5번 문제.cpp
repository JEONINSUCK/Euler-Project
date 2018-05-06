#include<stdio.h>

void main()
{
	int i;
	int result = 0;
	int input = 3;
	bool jug = false;
	for (;;)
	{

		for (i = 2; i <= 20; i++)
		{
			if (input%i == 0)
			{
				jug = true;
				continue;
			}
			else
			{
				jug = false;
				break;
			}
		}
		
		if (jug == true)
		{
			result = input;
			printf("%d\n", input);
			break;
		}
		input++;
	}
}