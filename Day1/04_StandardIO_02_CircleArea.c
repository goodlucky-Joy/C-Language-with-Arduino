/* Exercise 2: ����ڷκ��� ���� �������� �Է¹޾Ƽ� ���� ������ ��� �� ����� ��� */
#include <stdio.h>

int main(void)
{
    float radius;           // ���� ������
    float area;             // ���� ����

    printf("���� �������� �Է��ϼ���: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("���� ������ %f �Դϴ�.\n", area);

    return 0;
}
