#include <stdio.h>
int main()
{
    char grade ;

    printf("Enter your grade:");
    scanf("%c",&grade);
    
  
    if(grade == 'A')
    {
        printf("Excellent\n");
    }
    else if(grade == 'B')
    {
        printf("very good\n");
    }
    else if(grade == 'C')
    {
        printf("good\n");
    }
    else if(grade == 'D')
    {
        printf("poor\n");
    }
    else if(grade == 'F')
    {
        printf("fail\n");
    }
    else
    {
        printf("Invalid grade plase enter A, B, C, D or F\n");
    }
    return 0;

}