/* 증감연산자의 선 후 표현방법에 따른 결과값 확인 예제 프로그램 */

#include <stdio.h>

int main()
{
    int x = 10, y = 10;
    int a,b;

    a = x++;
    b = ++y;

    printf("a = %d", a);
    printf("x = %d", x);

    printf("b = %d", b);
    printf("y = %d", y);


    printf("x = %d\n", x);
    printf("++x = %d \n", ++x);
    printf("x = %d \n", x);

    printf("y = %d\n", y);
    printf("y++ = %d \n", y++);
    printf("y = %d \n", y);


    return 0;


}
