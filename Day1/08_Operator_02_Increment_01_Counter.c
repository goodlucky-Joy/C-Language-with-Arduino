/* Exercise 3-4: ī���� ���α׷� */
#include <stdio.h>

int main(void)
{
	int count = 0;

	count += 1;     // ī���͸� 1�� ����
	printf("ī������ ���� %d.\n", count);

	count += 1;     // ī���͸� 2�� ����
	printf("ī������ ���� %d.\n", count);

	// ī���͸� 3�� ���� �� ���
	printf("ī������ ���� %d.\n", count += 1);

	count += 1;     // ī���͸� 4�� ����
	printf("ī������ ���� %d.\n", count);

	count += 1;     // ī���͸� 5�� ����
	printf("ī������ ���� %d.\n", count);

	count -= 1;     // ī���͸� 4�� ����
	printf("ī������ ���� %d.\n", count);

	count -= 1;     // ī���͸� 3�� ����
	printf("ī������ ���� %d.\n", count);

    // ī���͸� 2�� ���� �� ���
	printf("ī������ ���� %d.\n", count -= 1);

    // ī���͸� 2�� ���� �� ���
	printf("ī������ ���� %d.\n", count -= 1);

	return 0;
}
