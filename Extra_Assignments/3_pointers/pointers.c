#include <stdio.h>
#include "pointers.h"


void swap(int x,int y,int z,int *a,int *b,int *c){

    printf("X= %d  Y= %d Z= %d P= %d Q=%d R=%d *P= %d *Q= %d *R=%d \n",x,y,z,a,b,c,*a,*b,*c);
    printf("Swapping pointers \n");
    c=a;
    a=b;
    b=c;
    printf("X= %d  Y= %d Z= %d P= %d Q=%d R=%d *P= %d *Q= %d *R=%d \n",x,y,z,a,b,c,*a,*b,*c);



}