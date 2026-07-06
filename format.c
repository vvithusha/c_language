#include <stdio.h>
int main()
{
    //format specifiers
    int num = 10;
    float f = 3.14;
    char ch = 'A';
    char str[] = "vithu";
    double d = 3.14159;
    char sentance[] = "hello vithu how are you";

    printf("number : %i\n",num);
    printf("float : %f\n",f);
    printf("character : %c\n",ch);
    printf("string : %s\n",str);
    printf("double :%lf\n",d);
    printf("sentance : %s\n",sentance);


    //output formatting
    int num2 = 10;
    int num1 = 20;
    printf("sum : %i",num2+num1);


    //REAL LIFE EXAMPLE
    int length = 10;
    int width = 5;
    int area = length * width;
    printf("area of rectangle is : %i",area);

    return 0;
}