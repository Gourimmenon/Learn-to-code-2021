#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     char a[100];
  
    gets(a);
    for(int i=0; i<strlen(a);i++)
    {
        if ((65<=a[i])&&(a[i]<=90))
        {
            a[i]=a[i]+32;
        }
        else if ((a[i]>=97)&&(a[i]<=122))
        {
            a[i]=a[i]-32;
        }
    }
    
    printf("%s",a);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
