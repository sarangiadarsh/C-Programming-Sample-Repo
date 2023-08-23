#include <stdio.h>
int main(){
    int a,i=0,j=0,k=0;
    while(a!=-1)
    {   
        printf("Enter a number ");
        scanf("%d",&a);
        printf("%d\n",a);
        if(a==0)
        {i++;}
        else if(a>0)
        {j++;}
        else
        {k++;}
        
    }
    printf(" -1 has been encountered.\nzeroes=%d\npositives=%d\nnegatives=%d",i,j,k);
}