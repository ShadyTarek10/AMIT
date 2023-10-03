/*

(3) The sequence of numbers 1, 1, 2, 3, 5, 8, 13, ... is called Fibonacci numbers, each is the sum of the preceding 2.
Write a program that given n, returns the nth Fibonacci number.
- with for/while
- with recursion
*/

#include<stdio.h>

int fib(int, int, int,int,int);

int main(){

        int first=0, second=1, next=0,x,i=0;
        printf("Enter the nth term");
        scanf("%d",&x);
        int res=fib(first,  second,  next,  x,  i);
        printf("\n%d",res);
       

    


    return 0;
}

int fib(int first, int second, int next, int x, int i){

        // next=first+second;
        // printf(" %d %d ",second,next);
        while(i<=x){

            first=second;
            second=next;
            next=first+second;
            printf(" %d ",next);

            if (i==x)
            {
                return next;
                
            }


            i++;
        }


}