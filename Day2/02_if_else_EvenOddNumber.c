/* pmc4_3: if ~ else 문 실습 */
#include <stdio.h>

int main(void)
{
    int number;
    printf("정수를 입력하시오:");
    scanf("%d", &number);

    if(number % 2 == 0)
        printf("입력된 값은 짝수 입니다.");
    else
        printf("입력된 값은 홀수 입니다.");

    return 0;
}
