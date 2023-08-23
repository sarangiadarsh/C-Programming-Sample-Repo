#include <stdio.h>
int main() 
{
    int i=1,j,k;
    for(k=4;k>0;k--)
    {
        for(j=4-k;j>=0;j--,i++)
           {
           printf("%d ",i);
           }
    
    printf("\n");
    }
    return 0;
}