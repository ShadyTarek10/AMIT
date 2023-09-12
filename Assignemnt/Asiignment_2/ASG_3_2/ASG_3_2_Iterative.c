#include <stdio.h>

void fib(int);

int main(){
    int x;

    printf("Enter the number of terms: ");
    scanf("%d",&x);

    fib(x);
    return 0;

}

void fib(int x){
    int f1=0,f2=1,f3;
    printf(" %d %d",f1,f2);
    for(int i=0;i<x;i++){
        
        f3=f1+f2;
        f1=f2;
        f2=f3;
      
       
        printf(" %d ",f3);
        



    }

}

