/* getchar()로 입력받은 문자를 putchar로 출력  */
#include <stdio.h>

int main(void)
{
     int ch;
     while( ( ch = getchar() ) != EOF )
          putchar(ch);

     return 0;
}

