/* 두 개의 정수를 입력받아 사칙연산을 하는 계산기 예제 프로그램 */
#include <stdio.h>

int main()
{
       int x, y, result;

       printf("두개의 정수를 입력하시오: ");
       scanf("%d %d", &x, &y);

       result = x + y;		// 덧셈 연산을 하여서 결과를 result에 대입
       printf("%d + %d = %d\n", x, y, result);

       result = x - y;		// 뺄셈 연산
       printf("%d - %d = %d\n", x, y, result);

       result = x * y;		// 곱셈 연산
       printf("%d * %d = %d\n", x, y, result);

       result = x / y;		// 나눗셈 연산
       printf("%d / %d = %d\n", x, y, result);

       result = x % y;		// 나머지 연산
       printf("%d %% %d = %d\n", x, y, result);

       return 0;
}
