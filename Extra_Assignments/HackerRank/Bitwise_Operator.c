#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int m1=0,m2=0,m3=0;
  for (int i = 1; i <= n; i++)
  {
     for (int j = i+1; j <= n; j++)
        {
            if ((i&j)>m1 && (i&j)<k)
               m1=i&j;
            //    printf("%d\n",m1);
            if ((i|j)>m2 && (i|j)<k)
               m2=i|j;  
            if ((i^j)>m3 && (i^j)<k)
               m3=i^j;      
        }
  }
  printf("%d\n%d\n%d\n",m1,m2,m3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
