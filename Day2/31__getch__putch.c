/* pmc7_6: _getch()¿Í _putch()  */
#include <stdio.h>
#include <conio.h>

int main(void)
{
     int ch;
     while( ( ch = _getch () ) != 'q' )
          _putch(ch);

     return 0;
}


