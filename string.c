#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void count(char a[1000])                                                    //count words func
{
    int count = 0;
    int i;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
        {
            count++;
        }
    }
    count = count+1;
    printf("no of words = %d\n",count);
}

void rev(char a[1000])                                                      //reverse string func
{
    int count=0,i;
    char r[1000];
    while(a[count]!='\0')
    {
        count++;
    }
    
    int x = count-1;
    for(i=0;i<count;i++)
    {
        r[i]=a[x];
        x--;    
    }
    
    r[i]='\0';
    
    printf("%s",r);
    
}

int main() {
    char str[1000];

    gets(str);
    
    count(str);
    rev(str);
 

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
