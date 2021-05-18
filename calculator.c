#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,c;
    float a,b,y;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d\n%f%f",&x,&a,&b);
    switch (x)
    {
            case(1): c= a + b;
                    printf("%d",c);
            break;
            case(2): c= a - b;
                     printf("%d",c);
            break;
            case(3): c= a * b;
                     printf("%d",c);
            break;
            case(4): 
            if (b==0)
                printf("Cannot be determined");
            else
            {
                y= a / b;
                printf("%.1f",y);
            }
                
            break;
    }
    
   

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
