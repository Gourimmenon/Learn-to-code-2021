#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int rev(l)                                                             //reverse function
{
    int q = 0;
    while (l!=0)
    {
        int r = l%10;
        q = q*10+r;
        l = l/10;       
    }
    printf("%d",q);
    
    return 0;
}


int prime(x)                                                           //func to check if prime
{
    int i;
    int n = 0;
    for (i=2;i<(x/2);i++)
    {
        if (x%i==0)
        {
            n++;
        }   
    }
    
    if(n==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
    return 0;
    
}

int main() {
    int a,b,x;
    scanf("%d%d",&a,&b);
    x = a+b;
    printf("%d\n",x);
    if (x%2==0)
    {
        rev(x);
    }
    else
    {
        prime(x);
    }
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
