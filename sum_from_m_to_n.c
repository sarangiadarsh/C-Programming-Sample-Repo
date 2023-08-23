#include <stdio.h>
int main(){
    int m,n,i=0;
    printf("Enter first and last number to series sum\n");
    scanf("%d %d",&m,&n);
    while(m<=n)
    {   
        i+=m;
        m++;
    }
    printf("%d ",i);
}
