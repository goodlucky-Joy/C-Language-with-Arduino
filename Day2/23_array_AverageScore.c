/* 성적을 입력받아 배열에 저장 후 평균을 계산하는 프로그램 */
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int grade[SIZE];
	int sum = 0;
	int i, average;

	for(i = 0; i < SIZE; i++)
	{
		printf("%d번째 학생들의 성적을 입력하시오: ", i+1);
		scanf("%d", &grade[i]);
	}
	for(i = 0; i < SIZE; i++)
		sum += grade[i];

	average = sum / SIZE;
	printf("성적 평균= %d\n", average);

	return 0;
}
