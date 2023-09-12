#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    int x,y;
    float z,k;
    printf("enter two integers\n");
    scanf("%d%d",&x,&y);
    printf("enter two floats\n");
    scanf("%f%f",&z,&k);

    printf("%d %d\n",x+y,x-y);
    printf("%.1f %.1f",z+k,z-k);


    return 0;
}