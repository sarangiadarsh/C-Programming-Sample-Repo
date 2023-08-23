#include <stdio.h>
void gcd(int x,int y)
{
    int i,m,k=1;
    if(x>y)
    {
        m=x;
    }
    else
    {
        m=y;
    }
    for( i = 1; i < m; i++)
    {
        if((x%i==0)&&(y%i==0))
        {
            k=i;
        }
    }
    printf("\nGCD=%d",k);
}
int main()
{
int a,b;
printf("Enter 2 numbers\n");
scanf(" %d %d",&a,&b);
gcd(a,b);
}