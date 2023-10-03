#include<stdio.h>

void disp(int arr[],int size);
void reverse(int arr[],int size);

int main(){

    int size,arr[]={1,2,3,4,5};
    size=sizeof(arr)/sizeof(arr[0]);
    disp(arr,size);
    reverse(arr,size);

    return 0;
}

void disp(int arr[], int size){
    printf("Original array:  ");
     for(int i=0;i<size;i++){
        printf(" %d  ",arr[i]);
    }
    printf("\n");

}

void reverse(int arr[],int size){
    int temp,j=size-1,i=0;
    
        while(j>i){
        
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            
            j--;
            i++;
        }    
            
        
        
    
    printf("Reversed array:  ");
    for (int i = 0; i < size; i++)
    {
        printf(" %d  ",arr[i]);
    }
    
    


}

