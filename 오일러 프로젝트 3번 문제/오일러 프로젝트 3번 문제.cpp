#include<stdio.h>

void main()
{
	long long num = 600851475143;
	int prime = 0;    

	for (int i = 3; i <= num; i++) {
		if (num % i == 0)
		{
			prime = i;
			num /= i;
		}
	}
	printf("%d\n", prime);
}
