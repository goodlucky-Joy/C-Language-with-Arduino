/* pmc4_3: if ~ else �� �ǽ� */
#include <stdio.h>

int main(void)
{
    int number;
    printf("������ �Է��Ͻÿ�:");
    scanf("%d", &number);

    if(number % 2 == 0)
        printf("�Էµ� ���� ¦�� �Դϴ�.");
    else
        printf("�Էµ� ���� Ȧ�� �Դϴ�.");

    return 0;
}
