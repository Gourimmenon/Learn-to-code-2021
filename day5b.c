#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,i;
    int b=1;
    scanf("%d",&a);
    if (a>0)
        {
        for (i=1;i<=a;i++)
            {  
               b=i*b;
            
            }
        printf("%d",b);
        }
    else if (a==0)
        {
          printf("1");
        }
    
    else
        {
          printf("ERROR");
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
