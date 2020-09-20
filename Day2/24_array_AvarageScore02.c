/* 이차원 배열을 이용한 학급별 평균 성적 */
#include <stdio.h>
#define CLASSES  3
#define STUDENTS 5

int main(void)
{
	int s[CLASSES][STUDENTS] = {
		{ 50, 75, 88, 62, 94 },		// 첫번째 행의 원소들의 초기값
		{ 40, 92, 89, 70, 65 },		// 두번째 행의 원소들의 초기값
		{ 100, 63, 88, 97, 43 },	// 세번째 행의 원소들의 초기값
	};
	int clas, student, total, subtotal;

	total = 0;
	for(clas = 0; clas < CLASSES; clas++)
	{
		subtotal = 0;
		for(student = 0; student < STUDENTS; student++)
			subtotal += s[clas][student];
		printf("%d 반의 평균 성적= %d\n", clas+1, subtotal / STUDENTS);
		total += subtotal;
	}

	printf("전체 학생들의 평균 성적= %d\n", total/(CLASSES * STUDENTS));

	return 0;
}
