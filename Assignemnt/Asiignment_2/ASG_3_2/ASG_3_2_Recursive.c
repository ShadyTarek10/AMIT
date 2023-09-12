#include <stdio.h>
#include<math.h>
int fib(int);

int main(){
    int x;

    printf("Enter the number of terms: ");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        printf("%d ",fib(i));
    }
    return 0;

}

int fib(int x){
    int c=0,f0=0,f1=1,f2;
    if (x==0)
        return 0;
        
    else if(x==1){
        return 1;
    }
    else{
        return (fib(x-1) + fib(x-2));
    }
    




    

}

