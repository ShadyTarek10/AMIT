#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double c=0,res=0,arr[100];
    int j,i=0,x,z;
    printf("Enter the number: \n");
    scanf("%d",&x);
    z=x;
    while(x>0){
            arr[i]=x%10;
            x/=10;
            i++;
            c++;

    }

    for(j=0;j<i;j++){
        res=res+pow(arr[j],c);

    }

    if (res==z){
        printf("armstrong number");
    }
    else{
        printf("not armstrong");
    }
    return 0;
}
