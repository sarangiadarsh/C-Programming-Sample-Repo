#include <stdio.h>
int main(){
    float a,b,c,d,i;
    printf("Enter number of terms in the series\n");
    scanf("%f",&d);
    for(a=1;a<d;a++)
    {
    b=a+1;
    c=a/b;
    i=c+a;
    }
    printf("%f",i);
}