#include <stdio.h>

int main()
{

    int x,y;
    int tmp;

    x = y = 1;

    tmp = -x+++--y;

    printf("x=%d\n", x);
    printf("y=%d\n", y);

    printf("tmp = %d\n", tmp);

    return 0;


}
