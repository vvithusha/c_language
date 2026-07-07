#include <stdio.h>
int main()
{
    int num1 = 19;
    float num2 = 5.5;
    double num3 = 10.5;
    char ch = 'A';
    char str[] = "Hello, World!";


    //Arithmetic operations
    int a = 10, b = 5;
    printf("Addition: %d\n",a+b);
    printf("Subtraction: %d\n",a-b);
    printf("multiplication: %d\n",a*b);
    printf("Division: %d\n",a/b);


    //find the size of the data types
    printf("size of int : %zu bytes\n",sizeof(int ));
    printf("size of float : %zu bytes\n",sizeof(float ));
    printf("size of double : %zu bytes\n",sizeof(double ));
    printf("size of char : %zu bytes\n\n\n",sizeof(char )); 


    // type conversion (use different variable names and explicit casts)
    float af = (float)num1; // int to float
    int bi = (int)num2;     // float to int
    char cc = (char)num3;   // double to char
    char dd = (char)num1;   // int to char

    printf("Implicit conversion:\n");
    printf("int to float: %f\n", af);
    printf("float to int: %d\n", bi);
    printf("double to char: %c\n", cc);
    printf("int to char: %c\n", dd);

    return 0;
}