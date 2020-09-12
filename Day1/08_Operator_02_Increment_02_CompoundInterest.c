/* Exercise 3-14: 증감 연산자 실습2 예제 */
#include <stdio.h>

int main(void)
{
	int money, year = 0;

	printf("투자금을 입력하시오(만원 단위): ");
	scanf("%d", &money);

	++year;
	printf("1. %f만원입니다. \n",  money * 0.12);
	printf("1. %d만원입니다. \n", (int)(money * 0.12) );
	money += (int)(money * 0.12);
	printf("%d년 뒤의 투자금은 %d만원입니다. \n", year, money);

	++year;
	money += (int)(money * 0.12);
	printf("%d년 뒤의 투자금은 %d만원입니다. \n", year, money);

	++year;
	money += (int)(money * 0.12);
	printf("%d년 뒤의 투자금은 %d만원입니다. \n", year, money);

	++year;
	money += (int)(money * 0.12);
	printf("%d년 뒤의 투자금은 %d만원입니다. \n", year, money);

	++year;
	money += (int)(money * 0.12);
	printf("%d년 뒤의 투자금은 %d만원입니다. \n", year, money);

	return 0;
}
