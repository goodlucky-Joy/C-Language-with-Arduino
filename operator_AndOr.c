#include <stdio.h>

int main()
{
    int x , y;

    printf("두 개의 정수를 입력하시오 :");
    scanf("%d %d", &x, &y);

    printf("%d && %d 의 결과값 : %d \n", x, y, x&&y);
    printf("%d || %d 의 결과값 : %d \n", x, y, x||y);
    printf("!%d 의 결과값 : %d \n: ", x, !x);


}