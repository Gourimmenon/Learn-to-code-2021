#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[100],n,temp;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {  
        for(int l=i+1;l<n;l++)
        {
        if(a[i]>a[l])
        {
            temp=a[i];
            a[i]=a[l];
            a[l]=temp;
        }
        }
  
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }        

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
