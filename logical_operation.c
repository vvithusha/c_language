#include <stdio.h>
int main()
{
    int A = 10 , B = 20 , c = 30;

    if((A > B) && (A > c))
    {
        printf("A is the largest number\n");
    }
    else if((B > A) && (B > c))
    {
        printf("B is the largest number\n");
    }
    else
    {
        printf("C is the largest number\n");
    }
    return 0;
}