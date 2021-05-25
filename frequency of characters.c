#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   char a[100],ch;
    int t=0;
    int i;
    
    gets(a);
    scanf("%c",&ch);
    
    for(i=0;a[i] != '\0'; i++)
    {
        if (ch== a[i])
            t=t+1;
    }
    printf("%d",t);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
