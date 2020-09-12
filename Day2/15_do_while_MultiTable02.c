/* pmc4_18: do ~ while을 사용한 구구단 프로그램2 */
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
