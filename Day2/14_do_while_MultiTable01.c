/* pmc4_17: do ~ while�� ����� ������ ���α׷�1 */
#include <stdio.h>

int main(void)
{
	int i, n;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);

	i = 1;

	do
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    } while( i <= 9);

	return 0;
}

