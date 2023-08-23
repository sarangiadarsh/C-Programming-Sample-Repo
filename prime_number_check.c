#include <stdio.h>
int main(){
    int i=1,a,k=0;
    printf("Enter the number ");
    scanf(" %d",&a);
    while(i<=a)
    {
        if(a%i==0)
        {
            k++;
        }
        else{}
        i++;
    }
    if(k==2)
    {
        printf("Entered number is Prime.");
    }
    else{
        printf("Entered number is Non-Prime.");
    }
    return 0;
}