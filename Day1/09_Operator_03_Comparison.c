/* Exercise 3-5: 관계 연산자 예제 */
#include <stdio.h>

int main(void)
{
       int x, y;

       printf("두개의 정수를 입력하시오: ");
       scanf("%d%d", &x, &y);

       printf("x == y의 결과값: %d\n", x == y);
       printf("x != y의 결과값: %d\n", x != y);
       printf("x > y의 결과값: %d\n", x > y);
       printf("x < y의 결과값: %d\n", x < y);
       printf("x >= y의 결과값: %d\n", x >= y);
       printf("x <= y의 결과값: %d\n", x <= y);

       return 0;
}
