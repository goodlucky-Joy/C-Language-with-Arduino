#include<stdio.h>

int main()
{
    int x = 10;
    int y = 20;
    int temp;


    printf("x = %d , y = %d\n", x,y);

    temp = x;
    x = y;
    y = temp;

    printf("changed x = %d , changed y = %d\n", x,y);

    return 0;

}
