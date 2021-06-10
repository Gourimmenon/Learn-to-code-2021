#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int amstrong(x)
{
    int y = 0;
    int i = x;
    while(i!=0)
    {
        int r=i%10;
        y=y+(r*r*r);
        i=i/10;
    }
    if (x==y)
    {
        printf("Amstrong");
    }
    else
    {
        printf("Not Amstrong");
    }
    return 0;
}






int main() {
    int a;
    scanf("%d",&a);
    amstrong(a);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
