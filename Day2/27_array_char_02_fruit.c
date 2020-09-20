/* 사용자로부터 문자열을 입력받아서 2차원 배열에 저장 후 화면에 출력하는 프로그램 */
#include <stdio.h>

int main(void)
{
     int i;
     char fruits[3][20];

     for(i=0; i<3; i++)
     {
          printf("과일 이름을 입력하시오: ");
          scanf("%s", fruits[i]);
     }

     for(i=0; i<3; i++)
          printf("%d번째 과일: %s \n", i, fruits[i]);

     return 0;
}
