/* pmc7_8: 2���� ���� �迭�� ���� �� �ʱ�ȭ �� ����, ȭ�鿡 ����ϴ� ���α׷� */
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
          printf("%d��°: %s \n", i, menu[i]);

     return 0;
}
