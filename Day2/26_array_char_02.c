/* 2차원 문자 배열에 문자열을 저장한 후 화면에 출력하는 프로그램 */
#include <stdio.h>

int main(void)
{
     int i;
     char menu[5][10] = {
          "init",
          "open",
          "close",
          "read",
          "write"
     };

     for(i=0; i<5; i++)
          printf("%d번째: %s \n", i, menu[i]);

     return 0;
}
