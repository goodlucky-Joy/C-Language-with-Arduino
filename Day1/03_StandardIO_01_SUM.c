/* Exercise 1: ����ڷκ��� 2���� ������ �Է¹޾Ƽ� ���� ����� ��� */
#include <stdio.h>

int main(void)
{
    int x;          // ù ��° ������ ������ ����
    int y;          // �� ��° ������ ������ ����
    int sum;        // �� ������ ���� �����ϴ� ����

    printf("ù ��° ���� �Է��ϼ���: ");
    scanf("%d", &x);
    printf("�� ��° ���� �Է��ϼ���: ");
    scanf("%d", &y);

    sum = x + y;

    printf("�� ���� ���� %d �Դϴ�.\n", sum);

    return 0;
}
