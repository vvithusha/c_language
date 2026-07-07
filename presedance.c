#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;
    int c;

    c = a + b * 2;

    printf("1. c = %d\n", c);

    c = (a + b) * 2;

    printf("2. c = %d\n", c);

    a += b * 3;

    printf("3. a = %d\n", a);

    b <<= 2;

    printf("4. b = %d\n", b);

    c = a > b ? a : b;

    printf("5. c = %d\n", c);

    c = a & b | 2;

    printf("6. c = %d\n", c);

    c = a % 3 + b / 2;

    printf("7. c = %d\n", c);

    return 0;
}