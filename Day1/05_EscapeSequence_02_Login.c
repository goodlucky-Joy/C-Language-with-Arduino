/* Exercise 3: �̽������� �������� �����Ͽ� ������ �α��� ȭ���� ����� ������. */
#include <stdio.h>

int main(void)
{
    int id, pass;

    printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���. \n");
    printf("id: ____\b\b\b\b");
    scanf("%d", &id);
    printf("pw: ____\b\b\b\b");
    scanf("%d", &pass);

    printf("\a �Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.\n", id, pass);

    return 0;
}
