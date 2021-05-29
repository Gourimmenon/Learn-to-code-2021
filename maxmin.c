#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[100];
    int n,i,max,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
          scanf("%d",&arr[i]);
        }
    
    max = arr[0];
    for(i=0; i<n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }   
    }
    
    min = arr[0];
    for(i=0; i<n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }   
    }

    
    printf("%d \n%d",min,max);
   

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
