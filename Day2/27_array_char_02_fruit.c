/* pmc7_9: ����ڷκ��� ���ڿ��� �Է¹޾Ƽ� 2���� �迭�� ���� �� ȭ�鿡 ����ϴ� ���α׷� */
#include <stdio.h>

int main(void)
{
     int i;
     char fruits[3][20];

     for(i=0; i<3; i++)
     {
          printf("���� �̸��� �Է��Ͻÿ�: ");
          scanf("%s", fruits[i]);
     }

     for(i=0; i<3; i++)
          printf("%d��° ����: %s \n", i, fruits[i]);

     return 0;
}
