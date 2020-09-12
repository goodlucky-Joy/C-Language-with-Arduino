/* 사용자로부터 2개의 정수를 입력받아서 더한 결과를 출력하는 예제 */
#include <stdio.h>

int main(void)
{
    int x;          // 첫 번째 정수를 저장할 변수
    int y;          // 두 번째 정수를 저장할 변수
    int sum;        // 두 정수의 합을 저장하는 변수

    printf("첫 번째 수를 입력하세요: ");
    scanf("%d", &x);
    printf("두 번째 수를 입력하세요: ");
    scanf("%d", &y);

    sum = x + y;

    printf("두 수의 합은 %d 입니다.\n", sum);

    return 0;
}
