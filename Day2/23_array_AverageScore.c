/* pmc6_2: ������ �Է¹޾� �迭�� ���� �� ����� ����ϴ� ���α׷� */
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int grade[SIZE];
	int sum = 0;
	int i, average;

	for(i = 0; i < SIZE; i++)
	{
		printf("%d��° �л����� ������ �Է��Ͻÿ�: ", i+1);
		scanf("%d", &grade[i]);
	}
	for(i = 0; i < SIZE; i++)
		sum += grade[i];

	average = sum / SIZE;
	printf("���� ���= %d\n", average);

	return 0;
}
