////int num;
//
////scanf("%x", &num);
////printf("%d", num);
//
//long long a, b;
//
//scanf("%d", &a);
//scanf("%d", &b);
//
//if ((a < 9999) || (a>-9999) && (b < 9999) || (b>-9999)) {
//	printf("%d\n", a + b);
//	printf("%d\n", a - b);
//	printf("%d\n", a * b);
//}
//return 0;
//
/////////////////////////
//#include<stdio.h>
//#include<math.h>
//
//int main(void) {
//
//	int a, b, c, d, e;
//	int result;
//
//	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//
//	result = pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2) + pow(e, 2);
//
//	printf("%d", result % 10);
//
//	return 0;
//}
////////////////////////////////
//#include<stdio.h>
//#include<math.h>
//
//int main(void) {
//
//	int a, b;
//	scanf("%d %d", &a, &b);
//
//	printf("%d", a + b);
//
//	return 0;
//}
//
////////////////////////////////////
//#include<stdio.h>
//
//int main(void) {
//	int l, p;
//	int a, b, c, d, e;
//
//	scanf("%d %d", &l, &p);
//	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//
//	int result;
//
//	result = l*p;
//
//	printf("%d %d %d %d %d", a - result, b - result, c - result, d - result, e - result);
//
//	return 0;
//}
////////////////////////////////////////
//
//
//
//
//손익 분기점
//#include<stdio.h>
//
//int main(void) {
//
//	int a, b, c;
//	int result = 0;
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (b >= c) {
//		printf("-1");
//	}
//	else {
//		result = a / (c - b) + 1;
//
//		printf("%d", result);
//	}
//	return 0;
//}
//
//////////////////////////////
//#include<stdio.h>
//#include<math.h>
//
//int main(void) {
//
//	long long n, m;
//	scanf("%lld %lld", &n, &m);
//
//	printf("%lld", llabs(n - m));
//
//	return 0;
//}
///////////////////////////////////
//#include<stdio.h>
//#include<math.h>
//
//int main(void) {
//
//	int first, second;
//	int f, s, s2, t;
//
//	scanf("%d %d", &first, &second);
//
//	f = second % 10;
//	s = second / 10;
//	s2 = s % 10;;
//	t = s / 10;
//
//	printf("%d\n", first*f);
//	printf("%d\n", first*s2);
//	printf("%d\n", first*t);
//	printf("%d\n", (first*f) + (first*s2 * 10) + (first*t * 100));
//}
//////////////////////////////////////
//#include<stdio.h>
//#include<math.h>
//
//int main(void) {
//	int a, b, c;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a == b && b == c)
//		printf("%d", 10000 + a * 1000);
//	else if (a == b || b == c)
//		printf("%d", 1000 + b * 100);
//	else if (a == c)
//		printf("%d", 1000 + c * 100);
//	else {
//		if (a > b && a > c)
//			printf("%d", a * 100);
//		else if (b > a && b > c)
//			printf("%d", b * 100);
//		else
//			printf("%d", c * 100);
//
//	}
//}
/////////////////////////////////////////
//#include<stdio.h>
//#include<math.h>
//
//int main(void) {
//	int hour, min, cook_time;
//	scanf("%d %d", &hour, &min);
//	scanf("%d", &cook_time);
//
//	hour += cook_time / 60;
//	min += cook_time % 60;
//
//	if (min > 59) {
//		hour++;
//		min %= 60;
//	}
//	if (hour > 23)
//		hour %= 24;
//
//	printf("%d %d", hour, min);
//
//}
/////////////////////////////////////
//#include<stdio.h>
//#include<math.h>
//
//int main(void) {
//	int hour, min, second, cook_time;
//	scanf("%d %d %d", &hour, &min, &second);
//	scanf("%d", &cook_time);
//
//	second += cook_time;
//	min += second / 60;
//	hour += min / 60;
//
//
//	printf("%d %d %d", hour % 24, min % 60, second % 60);
//
//}
//////////////////////////////////////
//#include<stdio.h>
//#include<math.h>
//
//int main(void) {
//	int hour, min, second, cook_time;
//	scanf("%d %d %d", &hour, &min, &second);
//	scanf("%d", &cook_time);
//
//	second += cook_time % 60;
//	min += cook_time / 60;
//	hour += min / 60;
//
//
//	if (second > 59) {
//		min++;
//		second %= 60;
//	}
//	if (min > 59) {
//		hour++;
//		min %= 60;
//	}
//	if (hour > 23) {
//		hour %= 24;
//	}
//
//	printf("%d %d %d", hour, min, second);
//
//}
/////////////////////////////////////////////
//#include<stdio.h>
//#include<math.h>
//
//int main(void) {
//	int a, b, c, temp;
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a > b) {
//		temp = a;
//		a = b;
//		b = temp;
//
//	}
//	if (a > c) {
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b > c) {
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d", a, b, c);
//
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void) {
//	int chess[6] = { 1,1,2,2,2,8 };
//	int input[6];
//
//	for (int i = 0; i < 6; i++)
//		scanf("%d", &input[i]);
//	for (int i = 0; i < 6; i++)
//		printf("%d", chess[i] - input[i]);
//
//	return 0;
//}
//틀린이유를 모르것다
//int a, b, c, d, e, f;
//int main() {
//	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
//	printf("%d %d %d %d %d %d", 1 - a, 1 - b, 2 - c, 2 - d, 2 - e, 8 - f);
//	return 0;
//}비교해보기
//
///////////////////////////
//#include<stdio.h>
//
//int main(void) {
//	int R1, R2;
//	int S;
//
//	scanf("%d %d", &R1, &S);
//
//	printf("%d", (S * 2) - R1);
//
//}
////////////////////////////////
//#include<stdio.h>
//
//int main(void) {
//	double a, b;
//
//	scanf("%lf %lf", &a, &b);
//
//	printf("%.9lf", a / b);
//
//	return 0;
//}
//////////////////////////////////////////////////
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//
//int main(void) {
//	int test_num;
//	int temp;
//	int j = 0;
//	scanf("%d", &test_num);
//
//	int *test1 = (int *)malloc(sizeof(int)*test_num);
//	int *test2 = (int *)malloc(sizeof(int)*test_num);
//	long long *result = (long long *)malloc(sizeof(long long)*test_num);
//
//
//	for (int i = 0; i < test_num; i++) {
//		scanf("%d %d", &test1[i],&test2[i]);
//	}
//
//	while (j<=test_num) {
//		j++;
//		temp = test1[j];
//		for (int i = 2; i < test2[j]; i++) {
//			result[j] = (test1[j] * temp)%10;
//		}
//		for (int i = 0; i < test_num; i++) {
//			printf("%d\n", result[i]);
//		}
//	}
//
//}
///////////////////////////////////////////////

//#include<stdio.h>
//#include<limits.h>
//
//int main(void) {
//	int a = 0;
//	long long sum = 0;
//	long long input;
//	char sign[3];
//
//
//	for (int i = 0; i < 3; i++) {
//		int overflow = 0;
//		scanf("%d", &a);
//		for (int j = 0; j < a; j++) {
//			scanf("%lld", &input);
//			if (sum > 0 && input > 0 && sum > LLONG_MAX - input) {
//				++overflow;
//				sum += input;
//			}
//			else if (sum < 0 && input < 0 && sum < LLONG_MIN - input) {
//				--overflow;
//				sum += input;
//			}
//			else {
//				sum += input;
//			}
//		}
//		if (overflow > 0) {
//			sign[i] = '+';
//		}
//		else if (overflow == 0) {
//			if (sum > 0) {
//				sign[i] = '+';
//				sum = 0;
//			}
//			else if (sum < 0) {
//				sign[i] = '-';
//				sum = 0;
//			}
//			else {
//				sign[i] = '0';
//				sum = 0;
//			}
//		}
//		else
//			sign[i] = '-';
//	}
//	for (int i = 0; i < 3; i++) {
//		printf("%c\n", sign[i]);
//	}
//}
//////////////////////////////////////////////////
//#include<stdio.h>
//#include<limits.h>
//
//int main(void) {
//
//	for (int i = 0; i < 3; i++) {
//		int overflow = 0;
//		long long sum = 0;
//
//		int n;
//		scanf("%d", &n);
//		long long input;
//		while (n--) {
//			scanf("%lld", &input);
//			if (sum > 0 && input > 0 && sum > LLONG_MAX - input) {
//				++overflow;
//				sum += input;
//			}
//			else if(sum < 0 && input < 0 && sum < LLONG_MIN - input){
//				--overflow;
//				sum += input;
//
//			}
//			else {
//				sum += input;
//			}
//		}
//		if (overflow > 0)
//			printf("+");
//		else if (overflow == 0) {
//			if (sum > 0)
//				printf("+");
//			else if (sum == 0)
//				printf("0");
//			else
//				printf("-");
//		}
//		else
//			printf("-");
//		printf("\n");
//	}
//	return 0;
//}
//////////////////////////////////////////////////
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void) {
//	int num;
//	long long sum_m = 0;
//	long long sum_y = 0;
//	scanf("%d", &num);
//
//	int *time = (int *)malloc(sizeof(int) * num);
//
//	for (int i = 0; i < num; i++) {
//		scanf("%d", &time[i]);
//		//시간 계산 부분 부족했음 요
//		sum_m += 15 * (time[i] / 60 + 1);
//		sum_y += 10 * (time[i] / 30 + 1);
//	}
//	if (sum_m < sum_y) 
//		printf("M %lld", sum_m);
//	else if(sum_m==sum_y)
//		printf("Y M %lld", sum_m);
//	else
//		printf("Y %lld", sum_y);
//
//	return 0;
//
//}
///////////////////////////////////////////////////
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main(void) {
//	char num[10];
//	int count = 1;
//	int *sum_result = (int*)malloc(sizeof(int) *count);
//
//	while (1) {
//		scanf("%s", num);
//		if (!strcmp(num, "0")) {
//			break;
//		}
//		if (strlen(num) > 1 && strlen(num) <= 2) {
//			sum_result[count] += 3;
//		}
//		else if (strlen(num) > 2 && strlen(num) <= 3) {
//			sum_result[count] += 4;
//		}
//		else {
//			sum_result[count] += 5;
//		}
//		for (int i = 1; i <=strlen(num); i++) {
//			int result = 0;
//			result = num[i] - '0';
//
//			if (result == 1) {
//				sum_result[count] += 2;
//			}
//			else if (result == 0) {
//				sum_result[count] += 4;
//			}
//			else {
//				sum_result[count] += 3;
//			}
//		}
//		count++;
//	}
//	for (int i = 1; i <=count; i++) {
//		printf("%d\n", sum_result[i]);
//	}
//	
//}