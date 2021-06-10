#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int vowel(char a[1000]){
    int i;
    int count=0;
    int num = 0;
    for(i=0;i<strlen(a);i++)
    {
        if ((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
            {
                count++;
            }
        else if((a[i]!='a')&&(a[i]!='e')&&(a[i]!='i')&&(a[i]!='o')&&(a[i]!='u')&&(a[i]!=' ')) 
        {
            num++;
        }
    }
  
    printf("%d\n%d\n",count,num);
    return 0;        
}

int space(char a[1000]){
    int i;
    int count=0;
    for(i=0;i<strlen(a);i++)
    { 
        if (a[i]==' ')
        {
            count++;
        }
    } 
    return count;
}


int main() {
    
    int a[200];
    int z;
    gets(a);
    vowel(a);
    
    z=space(a);
    printf("%d",z);
   

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
