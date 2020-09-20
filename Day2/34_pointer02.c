/* 포인터 예제 2 */
#include <stdio.h>

int main(void)
{
     int i = 10;
     double f = 12.3;
     int *pi;
     double * pf;

	 printf("Before: &i = %u , &f = %u \n", &i, &f);
     printf("Before: pi = %u , pf = %u \n\n", pi, pf);

     pi = &i;
     pf = &f;
     printf("After: pi = %u , (&i = %u)\n", pi, &i);
     printf("After: pf = %u , (&f = %u)\n", pf, &f);
     
     return 0;
}

