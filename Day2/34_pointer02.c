/* pmc7_11: ������ ������ ���� */
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

