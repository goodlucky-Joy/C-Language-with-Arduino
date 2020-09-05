#include <stdio.h>


int main()
{
    float invest;
    int year = 0;

    printf("투자금을 입력하시오(만원 단위):");
    scanf("%f", &invest);

    printf("%d 년 뒤의 투자금은 %f만원 입니다.\n", year++, invest);
    printf("%d년 이자 = %f\n", year, invest*0.12);
    printf("%d 년 뒤의 투자금은 %f만원 입니다.\n", year++, invest = invest+(invest*0.12));
//    printf("이자 = %f\n", invest*0.12);
    printf("%d 년 뒤의 투자금은 %f만원 입니다.\n", year++, invest +=(invest * 0.12));
    printf("%d 년 뒤의 투자금은 %f만원 입니다.\n", year++, invest +=(invest * 0.12));
    printf("%d 년 뒤의 투자금은 %f만원 입니다.\n", year++, invest +=(invest * 0.12));
    printf("%d 년 뒤의 투자금은 %f만원 입니다.\n", year++, invest +=(invest * 0.12));

    return 0;


}
