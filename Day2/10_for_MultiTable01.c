/* pmc4_13: ������ ���α׷�1 */
#include <stdio.h>

int main(void)
{
	int i, n;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);

	for(i = 1;i <= 9; i++)
		printf("%d * %d = %d\n", n, i, n * i);

	return 0;
}

