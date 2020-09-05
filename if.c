#include <stdio.h>

int main()
{
    int num;
    printf("정수를 입력하시오 : ");
    scanf("%d", &num);

    if ((num%2)!=0)
        printf("홀수 %d", num%2);
    if ((num%2)==0)
        printf("짝수 %d", num%2);

    return 0;

}
