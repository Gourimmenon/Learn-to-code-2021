#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[100][100],b[100][100];
    int ar,br,ac,bc,i,j,k;
    int sum=0;
    scanf("%d%d",&ar,&ac);
    for(i=0;i<ar;i++)
    {
        for(j=0;j<ac;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&br,&bc);
    for(i=0;i<br;i++)
    {
        for(j=0;j<bc;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if (ac==br)
    {
        for(i=0;i<ar;i++)
        {
            for(j=0;j<bc;j++)
            {
                 for(k=0;k<ac;k++)
                 {
                    sum += a[i][k]*b[k][j];
                 }
                int product=sum;
                sum=0;
                printf("%d ",product);
            }
             printf("\n");
        }
       
    }
    else
        printf("ERROR");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
