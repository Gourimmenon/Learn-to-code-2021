#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,a,b,i,sum;
    scanf("%d",&n);
    a=0; b=1;
    for (i=1;i<=n;i++)
        {
          printf("%d ",a);
          sum=a+b;
          a=b;
          b=sum;
        }
        

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
