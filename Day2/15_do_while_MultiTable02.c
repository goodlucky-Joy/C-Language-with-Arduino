/* pmc4_18: do ~ while문을 이용한 구구단프로그램2 */
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
			printf("%d * %d = %d\t", i, j, i * j);
			j++;
		} while (j <= 9);
		printf("\n");
	} while (i < 9);

	return 0;
}
