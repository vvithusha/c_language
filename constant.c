#include <stdio.h>
#define PI 3.14
int main()
{
    int num1 = 19;
    int num2 = 5;

    const int num = 100;
    printf("sum : %d\n",num + 90);
    printf("PI : %f\n",PI);

    //All Arithmetic operations

    printf("Adition : %d\n",num1 + num2);
    printf("Subtraction : %d\n",num1 - num2);
    printf("Multiplication : %d\n",num1 * num2);
    printf("Division : %d\n",num1 / num2);
    printf("modulus : %d\n",num1 % num2);
    printf("Increment : %d\n",++num1);
    printf("Decrement : %d\n",--num2);


    // Assignment operations

    int a = 10;

    a +=5;
    printf("a + 5 : %d\n",a);

    a -=5;
    printf("a - 5 : %d\n",a);

    a *=5;
    printf("a * 5 : %d\n",a);

    a /=5;
    printf("a / 5 : %d\n",a);

    a %=5;
    printf("a %% 5 : %d\n",a);

    a <<=5;
    printf("a << 5 : %d\n",a);

    a >>=5;
    printf("a >> 5 : %d\n",a);


    // Logical operations

    int x = 1;
    int y = 0;

    printf("\nAnd operations\n");
    printf("true &&  trure : %d\n",x && x);
    printf("true && false : %d\n",x && y);
    printf("false && false : %d\n",y && y);
    printf("false && true : %d\n",y && x);

    printf("\nOr operations\n");
    printf("true ||  true : %d\n",x || x);
    printf("true || false : %d\n",x || y);
    printf("false || false : %d\n",y || y);
    printf("false || true : %d\n",y || x);

    printf("\nNot operations\n");
    printf("!true : %d\n",!x);
    printf("!false : %d\n",!y);


    int isLoggedIn = 1;
    int isAdmin = 0;

    printf("Regular user: %d\n", isLoggedIn && !isAdmin);
    printf("Has access: %d\n", isLoggedIn || isAdmin);
    printf("Not logged in: %d\n", !isLoggedIn);

    
    return 0;
}