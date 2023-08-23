#include <stdio.h>
int main(){
    float a,b,c,d,i=1;
    printf("Enter number of terms in series\n");
    scanf("%f",&d);
    for(a=1;a<d;a++)
    {
        b=a+1;
        c=a/b;
        i = i+c;
    }
    printf("%f",i);
}