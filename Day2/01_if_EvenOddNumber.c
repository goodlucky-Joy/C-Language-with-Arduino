/* pmc4_2: if�� �ǽ� */
#include <stdio.h>

int main(void)
{
    int number;
    printf("������ �Է��Ͻÿ�:");
    scanf("%d", &number);

    if(number % 2 == 0)
        printf("�Էµ� ���� ¦�� �Դϴ�.");

    if(number % 2 != 0)
        printf("�Էµ� ���� Ȧ�� �Դϴ�.");

    return 0;
}
