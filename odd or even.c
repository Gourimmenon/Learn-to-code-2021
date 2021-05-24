#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i;
    int a=0, b=0;
    int arr[100];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            a++;
        }
        else
            b++;
    }
    printf("%d\n%d",a,b);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
