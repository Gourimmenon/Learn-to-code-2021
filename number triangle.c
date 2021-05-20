#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,b,j;
    scanf("%d",&n);
    for (i=n; i>=1; i--)
    {
        for (j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(b=1; b<=i;b++)
        {
             printf("%d",i);
        }
        printf("\n");
        
     }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
