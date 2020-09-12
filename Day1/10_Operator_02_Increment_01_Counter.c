/* 증감연산자를 이용한 카운터 예제 프로그램 */
#include <stdio.h>

int main(void)
{
	int count = 0;

	count += 1;     // 카운터를 1로 증가
	printf("카운터의 값은 %d.\n", count);

	count += 1;     // 카운터를 2로 증가
	printf("카운터의 값은 %d.\n", count);

	// 카운터를 3로 증가 후 출력
	printf("카운터의 값은 %d.\n", count += 1);

	count += 1;     // 카운터를 4로 증가
	printf("카운터의 값은 %d.\n", count);

	count += 1;     // 카운터를 5로 증가
	printf("카운터의 값은 %d.\n", count);

	count -= 1;     // 카운터를 4로 감소
	printf("카운터의 값은 %d.\n", count);

	count -= 1;     // 카운터를 3로 감소
	printf("카운터의 값은 %d.\n", count);

    // 카운터를 2로 감소 후 출력
	printf("카운터의 값은 %d.\n", count -= 1);

    // 카운터를 2로 감소 후 출력
	printf("카운터의 값은 %d.\n", count -= 1);

	return 0;
}
