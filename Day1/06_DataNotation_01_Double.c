/* Exercise 4: �ϳ��� �Ǽ��� �Է¹޾Ƽ� �Ҽ��� ǥ�� ����� ���� ǥ�� ������� ��� */
#include <stdio.h>

int main(void)
{
    double data;

    printf("�Ǽ��� �Է��Ͻÿ�: ");
    scanf("%lf", &data);

    printf("�Ǽ��������δ� %f�Դϴ�\n", data);	// �Ҽ��� ǥ���� 1.1
    printf("�����������δ� %e�Դϴ�\n", data);	// ���� ǥ�� ��� 1e10 = 1*10^10

    return 0;
}
