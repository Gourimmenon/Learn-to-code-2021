#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[100][100];
    int m,n,i,j,key;
    int counter=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for (i=0;i<n;i++)
        {
          for(j=0;j<m;j++)
              {
               scanf("%d",&arr[i][j]);
              }
        }
    scanf("%d",&key);
    for (i=0;i<n;i++)
        {
          for(j=0;j<m;j++)
              {
               if (arr[i][j]==key)
                   {
                    printf("Element found at (%d,%d)\n",i,j);
                    counter=counter+1;
                   }
              
                 
              }
        }
    
  if (counter==0)
      {
         printf("Element not found");
      }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
