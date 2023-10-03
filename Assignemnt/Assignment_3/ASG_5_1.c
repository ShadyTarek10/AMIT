#include<stdio.h>
#define SIZE 5

int main(){
    int arr_1[SIZE], i=0;

    printf("Please enter 5 numbers\n");
    for(i=0;i<SIZE;i++){
        scanf("%d",&arr_1[i]);
    }
    
    int max=arr_1[0],min=arr_1[1],Max_pos,Min_pos;
    
    for(i=0;i<SIZE;i++){
        if(arr_1[i]>max)
        {  
            max=arr_1[i];
            Max_pos=i;
        }
        if (arr_1[i]<min)
        {    min=arr_1[i];  
             Min_pos=i;     
        
        }

    }
    
    for ( i = 0; i < SIZE; i++)
    {
        printf("%d\t",arr_1[i]);
        
    }
    printf("\n");
    
    printf("The maximum number is %d in position %d \n",max,Max_pos);
    printf("The minimum number is %d in position %d \n",min,Min_pos);

    


    return 0;

}