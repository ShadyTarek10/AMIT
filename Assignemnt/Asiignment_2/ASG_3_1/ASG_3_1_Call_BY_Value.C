#include <stdio.h>

void swap(int, int);

int main(){
    int x,y;

    printf("Kindly enter two numbers");
    scanf("%d%d",&x,&y);

    swap(x,y);
    return 0;

}

void swap(int x,int y){
    
    printf("Before swapping X= %d  Y=  %d\n",x,y);

    x+=y;
    y=x-y;
    x=x-y;    

    printf("After swapping using call by value X= %d  Y=  %d",x,y);



}