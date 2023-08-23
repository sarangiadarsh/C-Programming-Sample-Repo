#include <stdio.h>
int main(){
    int i=1,j=0,k;
    printf("Enter number of lines ");
    scanf("%d",&k);
    while(i<=k)
    {
        j=0;
        while(j<i)
        {   
            j++;
            printf("* ");
        }
        printf("\n");
        
        i++;
    }
    return 0;
}