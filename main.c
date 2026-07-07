#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool ishungry = true;
    bool isfull = false;
    bool isonline = false;

    printf("i like pizza\n");
    printf("it's very tasty!\n");

    printf("you are hungry: %d\n", ishungry);
    printf("you are full: %d\n",isfull);

   if(isonline == true){
    printf("you're online.\n");
   }
   else{
    printf("you're offline.\n");
   }
    return 0;
}