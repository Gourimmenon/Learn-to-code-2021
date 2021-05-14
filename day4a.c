#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
  
    scanf("%d",&a);

    if(a%400==0)
    {
        printf("Yes");
    }
    else
    {
        if (a%4==0)
        { 
            if (a%100==0)
            {
                printf("No");  
             }
            else 
            {
                printf("Yes");
            }
          
        }
        else
        {
         printf("No");  
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
