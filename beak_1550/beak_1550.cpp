#include<stdio.h>
#include<math.h>
int main(void) {

	int x, y, diagonal; 
	
	scanf("%d %d %d", &diagonal, &x, &y);

	int diagonal2 = diagonal* diagonal;
	int x2 = x*x;
	int y2 = y*y;

	int result = diagonal2 / x2 + y2;

	printf("%d %d", sqrt(result*x2), sqrt(result*y2));

}
