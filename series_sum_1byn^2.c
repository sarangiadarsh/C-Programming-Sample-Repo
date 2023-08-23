#include <stdio.h>
int main(){
    float a,b,d,i;
    printf("Enter the number of terms in series\n");
    scanf("%f",&d);
    for(a=1;a<d;a++)
    {
        b=a*a;
        i=i+(1/b);
        
    }
   printf("%f",i); 

}