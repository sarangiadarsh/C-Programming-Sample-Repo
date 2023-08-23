#include <stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter Square Matrix Size: ");
    scanf(" %d",&n);
    int a[n][n],b[n][n],c[n][n];
    printf("Enter the elements of matrix A\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf(" %d",&a[i][j]);
        }
    }  
    printf("Enter the elements of matrix B\n");  
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             scanf(" %d",&b[i][j]);
        }
    }    


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d\t",b[i][j]);
        }
        printf("\n");
    }      

for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {   
            c[i][j]=0;
            for(k=0;k<n;k++)
            {   
                c[i][j]+= a[k][i]*b[j][k];
            }
            printf(" %d\t",c[i][j]);
        }
        printf("\n");
    }    
}