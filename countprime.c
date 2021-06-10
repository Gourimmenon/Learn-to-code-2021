#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a[100],n,prime=0,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
          num=0;
        for(int j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                num=1;
            }
          
        }
        if(num!=1)
        {
            prime++;
        }
    }
        printf("%d",prime);
    
    return 0;
}
