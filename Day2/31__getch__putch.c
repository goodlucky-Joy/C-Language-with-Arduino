/* _getch()로 입력받은 문자를 _putch()로 출력  */
#include <stdio.h>
#include <conio.h>

int main(void)
{
     int ch;
     while( ( ch = _getch () ) != 'q' )
          _putch(ch);

     return 0;
}


