/* pmc6_1: ���� �Է��ϴ� �迭�� ���� �� ����ϴ� ���α׷� */
#include <stdio.h>

#define SIZE 5

int main(void)
{
    int i;
    int value[SIZE];

    for(i=0; i<SIZE; i++)
    {
        printf("%d��° ���� �Է��Ͻÿ�: ", i);
        scanf("%d", &value[i]);
    }

    for(i=0;i < SIZE; i++)
         printf("value[%d]=%d\n",i, value[i]);

    return 0;
}
