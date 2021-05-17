#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a,b,c;
    char grade;
    float percent;
    scanf("%f%f%f",&a,&b,&c);
    percent=(a+b+c)/3;
    if (percent>=90)
        grade='A';
    else if (percent>= 80)
        grade='B';
    else if (percent>= 70)
        grade='C';
    else if (percent>= 60)
        grade='D';
    else if (percent>= 40)
        grade='E';
    else
        grade='F';
    
    printf("%.2f\n", percent);
    printf("%c", grade);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
