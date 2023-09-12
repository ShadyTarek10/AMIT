#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n,z;
    printf("Enter a number:  ");
    scanf("%d",&x);
    printf("\n");
    printf("Enter nth bit to toggle (0-31):  ");
    scanf("%d",&n);
    printf("\n");
    z=x;
    z^=1<<n;
    printf("Bit toggled successfully\n");
    printf("Number before toggling one bit: %d (in decimal)\n",x);
    printf("Number after toggling one bit: %d (in decimal)\n",z);



    return 0;
}
