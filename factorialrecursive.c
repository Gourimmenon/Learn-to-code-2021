#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(n){
   int a;
    if (n==0){
        a=1;
    }
    else{
        a = n * fact(n-1);
    }
    return a;
}





int main() {
    int n,a;
    scanf("%d",&n);
        if(n>=0){
            a=fact(n);
            printf("%d",a);
        }
    else{
        printf("ERROR");
    }
            

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
