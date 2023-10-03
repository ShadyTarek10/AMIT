/*

(3) The sequence of numbers 1, 1, 2, 3, 5, 8, 13, ... is called Fibonacci numbers, each is the sum of the preceding 2.
Write a program that given n, returns the nth Fibonacci number.
- with for/while
- with recursion
*/

#include<stdio.h>

const int size=1000;

int main(){
    int n,arr[size],i=1;
    printf("Enter the nth term");
    scanf("%d",&n);
    // int res=2*n-1;
    // printf("%d\n",res);
    
    while(i<=n){
        if(i==1)
            arr[i]=1;
        else   
            arr[i]=arr[i-1]+2;
        if(i==n){
            printf("%d",arr[i]);
            break;
        }
        // printf("%d\n",arr[i]);
        i++;
    }



    return 0;
}