/* pmc4_15: while을 사용한 구구단 프로그램1 */
#include <stdio.h>

int main(void)
{
	int i, n;

	printf("정수를 입력하시요:");
	scanf("%d", &n);

	i = 0;
    while(i < 9)
    {
        i++;
        printf("%d * %d = %d\n", n, i, n * i);
    }

	return 0;
}

