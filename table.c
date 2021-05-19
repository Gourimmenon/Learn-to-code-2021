#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a,b,i;
    
    do
    {
        printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
        scanf("%d",&a);
        if ((1<=a)&&(a<=5))
        {
              for (i=1; i<=10; i++)
                 {
                  b= a * i;
                  printf("%d ",b);
                 }
        }
        else if (a!=6)
            printf("Enter a valid option!");
        
    }while (a!=6);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
