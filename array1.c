#include <stdio.h>
int main(){
    int i,j,n;
    
    printf("Enter length of array ");
    scanf(" %d",&n);
    int a[n];
    printf("Enter elements of the array ");
    for(i=0;i<n;i++)
    {
        scanf(" %d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        printf("%d ", a[j]);
    }
    return 0;

}