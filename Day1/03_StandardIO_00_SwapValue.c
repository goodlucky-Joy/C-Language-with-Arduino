/* 두개의 변수의 값을 서로 바꿔주는 예제 프로그램 */

#include<stdio.h>

int main()
{
    int x = 10;
    int y = 20;
    int temp;       //임시로 변수값을 저장할 공간


    printf("x = %d , y = %d\n", x,y);

    temp = x;
    x = y;
    y = temp;

    printf("changed x = %d , changed y = %d\n", x,y);

    return 0;

}
