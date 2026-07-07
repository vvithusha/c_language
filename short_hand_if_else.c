#include <stdio.h>
#include <stdbool.h>
int main()
{
    int temp = -8;

    (temp > 0 )? printf("normal temperature\n") : printf("low temperature\n");


    (temp > 0 )? (temp > 30)? printf("vary hot temperature\n") : printf("normal temperature\n") : (temp < -10)? printf("vary low temperature\n"): printf("moderate temperature\n");

    //C Nested If
    int age =21;
    bool iscitizen = true;

    if(age >= 18)
    {
        printf("you are eligible to vote , ");
        if(iscitizen == true)
        {
            printf("And you are a citizen\n ");
        }
        if(iscitizen == false)
        {
            printf("But you are not a citizen\n");
        }

    }
    else 
    {
        printf("you are not eligible to vote\n");
    }
    return 0;



}