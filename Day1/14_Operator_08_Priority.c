/* Exercise 3-10: 연산자 우선 순위 예제 */
#include <stdio.h>

int main(void)
{
    int x=0, y=0;
    int result;

    result = 2 > 3 || 6 > 7;
    printf("2 > 3 || 6 > 7 : %d\n", result);

    result = 2 || 3 && 3 > 2;
    printf("2 || 3 && 3 > 2 : %d\n", result);

    result = x = y = 1;
    printf("x = y = 1 : %d\n", result);

    result = - ++x + y--;
    printf("- ++x + y-- : %d\n", result);

    return 0;
}
