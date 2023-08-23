#include <stdio.h>
int main()
{
    int leap,k;
    printf("Enter the year to check if its leap to not\n");
    scanf("%d",&leap);
    if (leap%100==0&&leap%400==0)
    {
        k = 1;
    }
    else if(leap%100==0)
    {
        k = 2;
    }
    else{
        k = 3;
    }
    
    if ((leap%4==0) && ((k==1)||(k==3)))
    {
        printf("The entered year is leap.");
    }
    else
    {
        printf("The year is not leap.");
    }
    return 0;
}