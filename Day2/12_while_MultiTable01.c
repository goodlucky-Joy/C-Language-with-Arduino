/* pmc4_15: while�� ����� ������ ���α׷�1 */
#include <stdio.h>

int main(void)
{
	int i, n;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);

	i = 0;
    while(i < 9)
    {
        i++;
        printf("%d * %d = %d\n", n, i, n * i);
    }

	return 0;
}

