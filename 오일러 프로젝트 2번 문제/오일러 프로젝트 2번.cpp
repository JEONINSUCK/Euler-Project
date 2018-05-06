#include <stdio.h>
int main() {
	int i, a = 0, b = 1, result = 0, sum = 0;
	while (result<4000000) {
		result = a + b;
		a = b;
		b = result;
		if (result % 2 == 0) {
			sum += result;
		}
	}
	printf("%d", sum);
}
