
#include<stdio.h>

int occurance(int arr[],int size,int x);

int main(){

    int arr[]={1,2,3,4,4,4},required_number=4,size;

    size=sizeof(arr)/sizeof(arr[0]);
    int res=occurance(arr,size,required_number);
    printf("%d",res);




    return 0;
}

int occurance(int arr[],int size, int x){
    int index,found=0;
    for (int i = 0; i < size; i++)
    {
        if( arr[i]==x)
        {
            found=1;
            index=i;
            break;
        }
        else
        {
            found=0;
        }
    }

    if(found==1)
        return index;
    else
        return -1;    
    




}
