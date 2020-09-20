/* 하나의 문자열에 저장된 문자들을 다른 문자 배열로 복사하는 프로그램  */
#include <stdio.h>

int main(void)
{
     char src[] = "The worst things to eat before you sleep";
     char dst[100];
     int i;

     printf("원본 문자열=%s\n", src);
     for(i=0; src[i] != NULL; i++)
          dst[i] = src[i];
     dst[i] = NULL;
     printf("복사 문자열=%s\n", dst);

     return 0;
}
