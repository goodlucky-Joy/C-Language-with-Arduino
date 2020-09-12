/* 시프트 연산자 예제 프로그램 */
#include <stdio.h>

int main(void)
{
	int x = 9;   					  //00001001

	printf("비트 << = %#08x\n", x << 1);		//00010010
	printf("비트 >> = %#08x\n", x >> 1);		//00000100

	return 0;
}
