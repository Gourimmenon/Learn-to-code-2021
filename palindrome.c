#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,r,num;
    scanf("%d",&a);
    b=0;
    num=a;
    while(a!=0)
    { 
      r=a%10;
      b=(b*10)+r;
      a=a/10;
        
    }
    
    if (num==b)
        printf("Yes");
    else
        printf("No");
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
