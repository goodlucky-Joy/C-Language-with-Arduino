/* while문을 이용한 구구단 프로그램 */
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
		    printf("%d * %d = %d\t", i, j, i * j);
		}
		printf("\n");
		i++;
    	}

	return 0;
}

