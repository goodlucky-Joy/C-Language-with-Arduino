/* pmc4_18: do ~ while�� ����� ������ ���α׷�2 */
#include <stdio.h>

int main(void)
{
	int i, j, n;

	i = 1;
	do
	{
		i++;
		j = 1;

		do
		{
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		} while (j <= 9);

	} while (i < 9);

	return 0;
}
