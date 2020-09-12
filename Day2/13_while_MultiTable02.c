/* pmc4_16: while을 사용한 구구단 프로그램2 */
#include <stdio.h>

int main(void)
{
	int i, j, n;

	i = 2;
	while(i <= 9)
    {
        j = 0;
        while(j < 9)
        {
            j++;
            printf("%d * %d = %d\n", i, j, i * j);
        }
        i++;
    }

	return 0;
}

