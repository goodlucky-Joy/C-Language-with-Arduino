/* pmc4_17: do ~ while을 사용한 구구단 프로그램1 */
#include <stdio.h>

int main(void)
{
	int i, n;

	printf("정수를 입력하시요:");
	scanf("%d", &n);

	i = 1;

	do
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    } while( i <= 9);

	return 0;
}

