/* pmc7_7: 키보드에서 입력된 문자를 검사하여 소문자이면 대문자로 바꾸어 주는 프로그램 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;

    while( ( c = getchar () ) != EOF )
    {
      if( islower(c) )
         c = toupper(c);
      putchar(c);
    }

    return 0;
}
