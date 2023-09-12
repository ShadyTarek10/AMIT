#include <stdio.h>
// #include "pointers.h"



void swap(int,int,int,int*,int*,int *);
int main() {
    int x=10,y=20,z=30 ;
    int *p = &x, *q = &y , *r=&z;
    swap(x,y,z,p,q,r);
   

    return 0;
}


void swap(int x,int y,int z,int *a,int *b,int *c){

    printf("X= %d  Y= %d Z= %d P= %d Q=%d R=%d *P= %d *Q= %d *R=%d \n",x,y,z,a,b,c,*a,*b,*c);
    printf("Swapping pointers \n");
    c=a;
    a=b;
    b=c;
    printf("X= %d  Y= %d Z= %d P= %d Q=%d R=%d *P= %d *Q= %d *R=%d \n",x,y,z,a,b,c,*a,*b,*c);



}