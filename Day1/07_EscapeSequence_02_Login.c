/* 이스케이프 시퀀스를 포함하여 아이디와 패스워드를 입력받는 간단한 로그인 화면 예제 프로그램 */
#include <stdio.h>

int main(void)
{
    int id, pass;

    printf("아이디와 패스워드를 4개의 숫자로 입력하세요. \n");
    printf("id: ____\b\b\b\b");
    scanf("%d", &id);
    printf("pw: ____\b\b\b\b");
    scanf("%d", &pass);

    printf("\a 입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.\n", id, pass);

    return 0;
}
