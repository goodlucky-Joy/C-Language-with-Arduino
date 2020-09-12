/* Exercise 3-13: 논리 연산자 실습2 예제 */
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
