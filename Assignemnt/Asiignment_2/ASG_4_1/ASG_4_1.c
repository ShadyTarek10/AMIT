#include <stdio.h>
#include<math.h>

int edit(int *);
int main(){
    int x,res,*ptrx=&x;

    printf("Enter the value of X:  ");
    scanf("%d",&x);
    printf("Before calling edit X= %d\n",*ptrx);
    res=edit(ptrx);

     printf("After calling edit X= %d\n",*ptrx);

    
    return 0;

}
int edit(int *x){

    *x+=1;
    return *x;



}





    



