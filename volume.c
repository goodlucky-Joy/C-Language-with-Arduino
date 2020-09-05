#include <stdio.h>

int main()
{
    double width, depth, height;
    double volume;

    printf("상자의 가로, 세로, 높이를 한번에 입력 : ");
    scanf("%lf %lf %lf", &width, &depth, &height);

    volume = width * depth * height;
    printf("\n상자의 부피는 %lf입니다.", volume);


    return 0;
}
