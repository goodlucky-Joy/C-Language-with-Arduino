/* pmc7_10: 포인터 예제 */
int main()
{
     int i = 10;
     char c = 69;
     double f = 12.3;

     printf("i의 값: %u, i의 주소: %u\n", i, &i);
     printf("c의 값: %u, c의 주소: %u\n", c, &c);
     printf("f의 값: %u, f의 주소: %u\n", f, &f);

     return 0;
}
