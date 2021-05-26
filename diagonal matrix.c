#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[100][100];
    int m,n,i,j;
    scanf("%d",&m);
    scanf("%d",&n);
    if (m!=n)
        printf("ERROR");
    else
    {
        for (i=0;i<m;i++)
        {
             for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for (i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {   
                if (i==j)
                {
                    printf("%d ",a[i][j]);
                }
            }
        }
        printf("\n");
        
       for (i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {   
                if (i+j==n-1)
                {
                    printf("%d ",a[i][j]);
                }    
            }
        } 
      
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
