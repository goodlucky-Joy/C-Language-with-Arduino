#include <stdio.h>

int main()
{
    double a, b;

    printf("2개의 실수를 입력하시오:");
    scanf("%lf %lf", &a, &b);

    printf("합 = %f ", a+b);
    printf("차 = %f ", a-b);
    printf("곱 = %f ", a*b);
    printf("몫 = %f\n", a/b);

    return 0;
}
