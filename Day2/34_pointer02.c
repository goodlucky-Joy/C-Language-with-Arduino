/* pmc7_11: 포인터 변수의 연결 */
#include <stdio.h>

int main(void)
{
     int i = 10;
     double f = 12.3;
     int *pi;
     double * pf;

     printf("Before: pi = %u pf = %u \n", pi);

     pi = &i;
     pf = &f;
     printf("After: %u %u \n", pi, &i);
     printf("After: %u %u \n", pf, &f);
     return 0;
}

