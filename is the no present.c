#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,a;
    int countr=0;
    int arr[100];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for (i=0;i<n;i++)
    {
        if (a==arr[i])
        {
            countr=1; 
            break;
        }
          
    }
    
    if (countr==1)
        printf("%d is present in this array",a); 
    
    else
        printf("%d is not present in this array",a); 
  

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
