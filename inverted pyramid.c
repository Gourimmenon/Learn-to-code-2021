#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,a;
    scanf("%d",&n);
    if (n>0)
    {
        for(i=n;i>0;i--)
        {
            for(a=0;a<n-i;a++)
            {
                printf("  ");
            }
        
            for(j=(2*i)-1;j>0;j--)
            {
                printf("* ");
            }
        
            printf("\n");
        }
    }
    else
        printf("ERROR");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
