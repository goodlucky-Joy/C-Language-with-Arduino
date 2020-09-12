/* 한 개의 실수를 입력받아서 소수점 표기 방법과 지수 표기 방법으로 출력하는 예제 프로그램 */
#include <stdio.h>

int main(void)
{
    double data;

    printf("실수를 입력하시오: ");
    scanf("%lf", &data);

    printf("실수형식으로는 %f입니다\n", data);	// 소수점 표기방법 1.1
    printf("지수형식으로는 %e입니다\n", data);	// 지수 표기 방법 1e10 = 1*10^10

    return 0;
}
