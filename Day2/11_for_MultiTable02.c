/* pmc4_14: 구구단 프로그램2 */
#include <stdio.h>

int main(void)
{
	int i, j, n;

	for(i = 2;i <= 9; i++)
        for(j = 1;j <= 9; j++)
            printf("%d * %d = %d\n", i, j, i * j);

	return 0;
}

