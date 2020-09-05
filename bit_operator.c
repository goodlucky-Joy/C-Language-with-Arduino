#include<stdio.h>

int main()
{
        int x = 9, y = 10;

        printf("bit x = %x\n", x);
        printf("bit x = % x\n", y);

        printf("bit AND = %04x\n", x&y);
        printf("bit OR = %08x\n", x|y);
        printf("bit XOR = %08x\n", x^y);
        printf("bit Not = %08x\n", ~x);

}
