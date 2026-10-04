#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	double avg;
	
	printf("정수를 입력하시오: ");
	scanf("%d", &a);
	printf("정수를 입력하시오: ");
	scanf("%d", &b);
	printf("정수를 입력하시오: ");
	scanf("%d", &c);

	avg = (a + b + c) / 3;
	printf("평균은 %lf입니다.", avg);

	return 0;
}