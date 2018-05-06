#include<stdio.h>
void main()
{
	int sum = 854;  
	int num[9] = { 3, 3, 5, 4, 4, 3, 5, 5, 4 }; 
	long long i, part;
	long long result = 0;
	for (i = 0; i < 9; i++) {
		part = num[i] * 100 + 997 + sum;  
		result += part;                                    
	}
	printf("%d\n", sum + result + 11); 
}