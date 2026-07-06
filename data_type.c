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


    //get the memory size 
    printf("size of int : %zu\n",sizeof(num));
    printf("size of float : %zu\n",sizeof(fnum));
    printf("size of double : %zu\n",sizeof(dnum));
    printf("size of char : %zu\n",sizeof(ch));

    int normalInt = 1000;                       // standard int 
    double normalDouble = 3.14;                 // standard double

    short int small = -100;                     // smaller int
    unsigned int count = 25;                    // only positive int
    long int big = 1234567890;                  // larger int
    long long int veryBig = 9223372036854775807; // very large int
    unsigned long long int huge = 18446744073709551615U; // very large, only positive
    long double precise = 3.141592653589793238L; // extended precision

    printf("Normal int: %d\n", normalInt);
    printf("Normal double: %lf\n", normalDouble);
    printf("Small: %hd\n", small);
    printf("Count: %u\n", count);
    printf("Big: %ld\n", big);
    printf("Very Big: %lld\n", veryBig);
    printf("Huge: %llu\n", huge);
    printf("Precise: %Lf\n", precise);

    
    return 0;
}