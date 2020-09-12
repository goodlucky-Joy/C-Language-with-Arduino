/* 논리 연산자. 윤년을 구하는 예제 프로그램 */
#include <stdio.h>

int main(void)
{
	int year, result;

	printf("연도를 입력하시오: ");
	scanf("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	printf("result=%d \n", result);

	return 0;
}
