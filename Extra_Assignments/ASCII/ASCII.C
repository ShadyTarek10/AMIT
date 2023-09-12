#include<stdio.h>
int main(){

    char letter,copy;

    printf("Kindly enter a character \n");
    scanf("%c",&letter);
    copy=letter;
    if (letter>='a' && letter <='z')
    {
            while (letter<'z')
            {
                letter+=1;
                printf("%c ",letter);
            }
            printf("\nUpper case:  ");
            copy-=32;

            while (copy<'Z')
            {
                copy+=1;
                printf("%c ",copy);
            }
            
    }
    else if (letter>='A' && letter <='Z')
    {
            while (letter<'Z')
            {
                letter+=1;
                printf("%c ",letter);
            }

            printf("\nLower case:  ");
            copy+=32;

            while (copy<'z')
            {
                copy+=1;
                printf("%c ",copy);
            }
            
    }
    else{
        printf("enter a valid char");
        
    }
    
    
    
    return 0;
}