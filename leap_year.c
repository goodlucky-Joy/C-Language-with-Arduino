#include <stdio.h>

int main()
{
    int year, result;

    printf("년도를 입력하세요 :");
    scanf("%d", &year);


    result = (((year%4)==0) && ((year%100)!=0) || ((year%400)==0));
    printf("result = %d", result);

    return 0;
}
