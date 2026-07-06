#include <stdio.h>
int main()
{
    int num =90;
    float fnum = 1.50;
    double dnum = 1.5643;
    char ch = 'A';

    printf("int : %d\n",num);
    printf("int : %i\n",num);
    printf("float : %f\n",fnum);
    printf("double : %lf\n",dnum);
    printf("char : %c\n",ch);
    printf("two_decimal_float : %.2f\n",fnum);
    printf("three_decimal_double : %.3lf\n",dnum);

    return 0;
}