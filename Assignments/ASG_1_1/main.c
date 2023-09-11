#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter a number \n");
    scanf("%d",&x);

    if(x & 1)
    {
        printf("The number is odd = 1 \nThe number is even = 0");
    }
    else
        {
        printf("The number is odd = 0 \nThe number is even = 1");
    }

    return 0;
}
