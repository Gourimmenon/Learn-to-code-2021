#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("a=%d b=%d",x,y);
}

int main() {
    
    int a,b;
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    swap(a,b);

    
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
