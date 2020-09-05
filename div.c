#include <stdio.h>

int main()
{
    int numPick;

    printf("1부터 100 사이의 정수를 입력하시오 : ");
    scanf("%d", &numPick);

    printf("%d 는 2로 나누어 %s\n", numPick, ((numPick%2)==0) ? "진다" : "지지 않는다" );
    printf("%d 는 3로 나누어 %s\n", numPick, ((numPick%3)==0) ? "진다" : "지지 않는다" );
    printf("%d 는 4로 나누어 %s\n", numPick, ((numPick%4)==0) ? "진다" : "지지 않는다" );
    printf("%d 는 5로 나누어 %s\n", numPick, ((numPick%5)==0) ? "진다" : "지지 않는다" );
    printf("%d 는 6로 나누어 %s\n", numPick, ((numPick%6)==0) ? "진다" : "지지 않는다" );
    printf("%d 는 7로 나누어 %s\n", numPick, ((numPick%7)==0) ? "진다" : "지지 않는다" );
    printf("%d 는 8로 나누어 %s\n", numPick, ((numPick%8)==0) ? "진다" : "지지 않는다" );
    printf("%d 는 9로 나누어 %s\n", numPick, ((numPick%9)==0) ? "진다" : "지지 않는다" );

    return 0;

}
