#include<stdio.h>
/*

(3) The sequence of numbers 1, 1, 2, 3, 5, 8, 13, ... is called Fibonacci numbers, each is the sum of the preceding 2.
Write a program that given n, returns the nth Fibonacci number.
- with for/while
- with recursion
*/

int fib(int x);
int main(){


    int x;
    printf("Enter the nth term");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        printf(" %d ",fib(i));
    }

    return 0;
}

int fib(int x){

    if(x==0)
        return 0;
    else if (x==1)
        return 1;

    else
        return fib((x-1))+fib((x-2));        

}