#include<stdio.h>

int main(void) {
	
	int a, b, c;
	int result=1;
	scanf_s("%d %d %d", &a, &b, &c);

	while (1) {
		if (a + b < c) 
			break;
		b += b;
		c += c;
		result++;
	}
	printf("%d", result);

	return 0;
}