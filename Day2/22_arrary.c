/* 값을 입력받아 배열에 저장 후 출력하는 프로그램 */
#include <stdio.h>

#define SIZE 5

int main(void)
{
    int i;
    int value[SIZE];

    for(i=0; i<SIZE; i++)
    {
        printf("%d번째 값을 입력하시오: ", i);
        scanf("%d", &value[i]);
    }

    for(i=0;i < SIZE; i++)
         printf("value[%d]=%d\n",i, value[i]);

    return 0;
}
