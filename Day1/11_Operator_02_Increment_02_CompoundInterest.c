/* 증감 연산자. 투자금을 입력하여 매년 12퍼센트의 복리이자를 계산하는 예제 프로그램 */
#include <stdio.h>

int main(void)
{
	int money, year = 0;

	printf("투자금을 입력하시오(만원 단위): ");
	scanf("%d", &money);

	printf("1. %f만원입니다. \n",  money * 0.03);
	printf("1. %d만원입니다. \n", (int)(money * 0.03) );

	++year;
	money += (int)(money * 0.03);
	printf("%d년 뒤의 투자금은 %d만원입니다. \n", year, money);

	++year;
	money += (int)(money * 0.03);
	printf("%d년 뒤의 투자금은 %d만원입니다. \n", year, money);

	++year;
	money += (int)(money * 0.03);
	printf("%d년 뒤의 투자금은 %d만원입니다. \n", year, money);

	++year;
	money += (int)(money * 0.03);
	printf("%d년 뒤의 투자금은 %d만원입니다. \n", year, money);

	++year;
	money += (int)(money * 0.03);
	printf("%d년 뒤의 투자금은 %d만원입니다. \n", year, money);

	return 0;
}
