#include <stdio.h>
int main()
{
    /*The switch expression is evaluated once
    The value of the expression is compared with the values of each case
    If there is a match, the associated block of code is executed
    The break statement breaks out of the switch block and stops the execution
    The default statement is optional, and specifies some code to run if there is no case match*/


    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);

    switch(marks)
    {
        case 90:
            printf("A grade\n");
            break;
        case 80:
            printf("B grade\n");
            break;
        case 70:
            printf("C grade\n");
            break;
        default:
            printf("Fail\n");
    }

    int day;

    printf("Enter a day number:");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
           printf("Tuesday\n");
           break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;  
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number\n");
    }

    return 0;
}