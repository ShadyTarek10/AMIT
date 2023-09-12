#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[101],st[101];
    fflush(stdin);
    scanf("%c", &ch);
    scanf("%s", st);
    scanf("\n");
    scanf("%[^\n]%*c", s);
     
    printf("%c\n", ch);
    printf("%s\n", st);
    printf("%s\n", s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}