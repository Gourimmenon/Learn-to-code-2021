#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,i,j;
    scanf("%d",&n);
    if (n>1)
    {
        
        for(i=n;i>0;i--)
        {
            for (j=1;j<=n+1-i;j++)
            {
                printf("%d ",j);
            }
        printf("\n");
        }
        
    }
        
    else
        printf("ERROR");
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
