#include <stdio.h>
int main()
{
    int i,j,k,count=5;
    int a[6][6];
for(i=0 ; i < count ; i++)
    {
        for( j=0 ;j < count; j++)
        {
        if(j>i)
        {
        a[i][j]=0;
        }
        else
        {
        if(j>0) 
            {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
        else
            {
            a[i][j]=a[i-1][j];
            }
        a[0][0]=1;
        }
        }
    }
    
    for (i = 0; i < count; i++)
    {
        for(k = count; k> i; k--)
        {
        printf(" ");
        }
        for ( j = 0; j < count; j++)
        { 
        if(i>=j)
        {  
        printf(" %d",a[i][j]);
        }
        }
        printf("\n");
    }
    return 0;
}   