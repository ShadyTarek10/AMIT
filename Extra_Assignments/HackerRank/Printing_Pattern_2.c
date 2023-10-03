#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.



int main() {
    int x,n;
  
    scanf("%d", &n);
    x=n;
    int y=2;

    for(int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){
            if( (i==1 || j==1) || (i==n || j==n))
                printf("%d ",x);
                // x-=1;

            // else{
            //     printf(" %d ",x-=1);
            // }    

        }
        // x=n;
        printf("\n");
    }
    
 
    return 0;
}
