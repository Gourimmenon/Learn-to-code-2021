#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c,max,min;
    scanf("%d%d%d",&a,&b,&c);
    if ((a>b) && (a>c))
        
    {
    max=a;
    }
    else
    {
        if (b>c)
        {
         max=b;
        }
        else
        {
         max=c;
        }
    }
    if ((a<b)&&(a<c))
    {
        min=a;
    }
    else
    {
        if (b<c)
        {
            min=b;
        }
        else
        {
            min=c;
        }
            
    }
    printf("%d\n%d",max,min);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
