/* pmc4_9: ���� ��� ���α׷�*/
#include <stdio.h>

int main(void)
{
	int score;
	int iscore;
	char grade;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &score);

	iscore = score / 10;

	switch(iscore)
	{
    case 10:
    case 9: grade = 'A';    break;  // 90 ~ 100�� A ����
    case 8: grade = 'B';    break;  // 80 ~ 89�� B ����
    case 7: grade = 'C';    break;  // 70 ~ 79�� C ����
    case 6: grade = 'D';    break;  // 60 ~ 69�� D ����
    default: grade = 'F';    break;  // 59�� ���ϴ� F ����
	}

	printf("����� ������ %c �Դϴ�.\n", grade);

	return 0;
}
