#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a,b,c,x,m,n;
    float root1,root2;
    char *nature;
    
    
    scanf("%f %f %f",&a,&b,&c);
    x= (b*b)-(4*a*c);
    
    if (x>0){
        nature = "Distinct Real :";
        root1 = (-b + sqrt(x))/(2*a);
        root2 = (-b - sqrt(x))/(2*a);
        printf("%s %.2f , %.2f",nature,root1,root2);
        }
    
    else if(x==0){
        nature = "Equal Real:";
        root1 = -b/(2*a);
        root2 = -b/(2*a);
        printf("%s %.2f , %.2f",nature,root1,root2);
        }
    
    else{
        
        nature = "Complex:";
        m=(-b/(2*a));
        n=(sqrt(-x)/(2*a));
                                                                     // root1 = (-b/2*a) + (i*sqrt(-x))/(2*a);
        printf("%s %.2f + i%.2f , %.2f - i%.2f",nature,m,n,m,n);
                                                                     //  root2 = (-b/2*a) - (i*sqrt(-x))/(2*a);
        
        
        }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
