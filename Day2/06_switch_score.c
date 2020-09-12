/* pmc4_9: 성적 계산 프로그램*/
#include <stdio.h>

int main(void)
{
	int score;
	int iscore;
	char grade;

	printf("성적을 입력하시오: ");
	scanf("%d", &score);

	iscore = score / 10;

	switch(iscore)
	{
    case 10:
    case 9: grade = 'A';    break;  // 90 ~ 100은 A 학점
    case 8: grade = 'B';    break;  // 80 ~ 89는 B 학점
    case 7: grade = 'C';    break;  // 70 ~ 79은 C 학점
    case 6: grade = 'D';    break;  // 60 ~ 69은 D 학점
    default: grade = 'F';    break;  // 59점 이하는 F 학점
	}

	printf("당신의 학점은 %c 입니다.\n", grade);

	return 0;
}
