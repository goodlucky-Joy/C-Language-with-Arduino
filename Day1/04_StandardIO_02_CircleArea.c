/* Exercise 2: 사용자로부터 원의 반지름을 입력받아서 원의 면적을 계산 후 결과를 출력 */
#include <stdio.h>

int main(void)
{
    float radius;           // 원의 반지름
    float area;             // 원의 면적

    printf("원의 반지름을 입력하세요: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("원의 면적은 %f 입니다.\n", area);

    return 0;
}
