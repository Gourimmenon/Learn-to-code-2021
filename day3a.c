#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float s,r,b,h,asq,ac,atr;
    scanf("%f\n %f\n %f%f",&s,&r,&b,&h);
    asq=s*s;
    ac=3.14*r*r;
    atr=0.5*b*h;
    printf("%.0f\n%.1f\n%.2f",asq,ac,atr);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
