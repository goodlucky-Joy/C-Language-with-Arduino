/* pmc7_3: �ϳ��� ���ڿ��� ����� ���ڵ��� �ٸ� ���� �迭�� �����ϴ� ���α׷�  */
#include <stdio.h>

int main(void)
{
     char src[] = "The worst things to eat before you sleep";
     char dst[100];
     int i;

     printf("���� ���ڿ�=%s\n", src);
     for(i=0; src[i] != NULL; i++)
          dst[i] = src[i];
     dst[i] = NULL;
     printf("���� ���ڿ�=%s\n", dst);

     return 0;
}
