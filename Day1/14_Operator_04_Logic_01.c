/* 논리 연산자. 두 수를 입력받아 논리연산(AND, OR)값을 출력하는 예제 프로그램 */
#include <stdio.h>

int main(void)
{
       int x, y;

       printf("두개의 정수를 입력하시오: ");
       scanf("%d%d", &x, &y);

       printf("%d && %d의 결과값: %d\n", x, y, x && y);
       printf("%d || %d의 결과값: %d\n", x, y, x || y);
       printf("!%d의 결과값: %d\n", x, !x);

       return 0;
}
