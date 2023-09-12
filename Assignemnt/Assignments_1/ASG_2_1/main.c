#include <stdio.h>
#include <stdlib.h>

int main()
{
    fflush(stdin);
    int x,y,res;
    char op;

    printf("Enter the operator\n");
    scanf("%c",&op);

    printf("Enter Number_1\n");
    scanf("%d",&x);

    printf("Enter Number_2\n");
    scanf("%d",&y);

    switch(op){
        case '+':
            res=x+y;
             printf("result is: %d\n",res);
        break;
        case '-':
            res=x-y;
             printf("result is: %d\n",res);
            break;
        case '*':
            res=x*y;
             printf("result is: %d\n\n",res);
            break;
        case '/':
            res=x/y;
             printf("result is: %d\n",res);
            break;
        case '%':
            res=x%y;
            printf("result is: %d\n",res);
            break;
        default:
            printf("Please enter a valid operator\n");


    }


    return 0;
}
