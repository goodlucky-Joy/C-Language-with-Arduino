/* pmc7_7: Ű���忡�� �Էµ� ���ڸ� �˻��Ͽ� �ҹ����̸� �빮�ڷ� �ٲپ� �ִ� ���α׷� */
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
