/* Exercise 3-9: ����Ʈ ������ ���� */
#include <stdio.h>

int main(void)
{
	int x = 9;   					// 1001

	printf("��Ʈ << = %#08x\n", x << 1);		// 00010010
	printf("��Ʈ >> = %#08x\n", x >> 1);		// 00000100

	return 0;
}
