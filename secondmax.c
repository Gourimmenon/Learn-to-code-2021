#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[100],n,l=0,s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[1]>a[0])
    {
        l=a[1];
        s=a[0];
    }
    else if(a[0]>a[1])
    {
        l=a[0];
        s=a[1];
    }
    for(int i=2;i<n;i++)
    {
        if(l<a[i])
        {
            s=l;
            l=a[i];
        }
        else
            if(s<a[i] && a[i]!=l)
            {
                s=a[i];
            }
    }
    printf("%d",s);
    return 0;
}
