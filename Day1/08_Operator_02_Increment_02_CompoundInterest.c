/* Exercise 3-14: ���� ������ �ǽ�2 ���� */
#include <stdio.h>

int main(void)
{
	int money, year = 0;

	printf("���ڱ��� �Է��Ͻÿ�(���� ����): ");
	scanf("%d", &money);

	++year;
	printf("1. %f�����Դϴ�. \n",  money * 0.12);
	printf("1. %d�����Դϴ�. \n", (int)(money * 0.12) );
	money += (int)(money * 0.12);
	printf("%d�� ���� ���ڱ��� %d�����Դϴ�. \n", year, money);

	++year;
	money += (int)(money * 0.12);
	printf("%d�� ���� ���ڱ��� %d�����Դϴ�. \n", year, money);

	++year;
	money += (int)(money * 0.12);
	printf("%d�� ���� ���ڱ��� %d�����Դϴ�. \n", year, money);

	++year;
	money += (int)(money * 0.12);
	printf("%d�� ���� ���ڱ��� %d�����Դϴ�. \n", year, money);

	++year;
	money += (int)(money * 0.12);
	printf("%d�� ���� ���ڱ��� %d�����Դϴ�. \n", year, money);

	return 0;
}
