/* for문을 이용한 구구단 프로그램 */
#include <stdio.h>

int main(void)
{
	int i, j, n;

	for(i = 2;i <= 9; i++){
		for(j = 1;j <= 9; j++)
		    printf("%d * %d = %d\t", i, j, i * j);
		printf("\n");
	}
	return 0;
}

