#include <stdio.h>
int main(){
    int a=0,b=1;

    while(b<=10)
    {   
        a+=b;
        printf("%d %d\n",b,a);
        b++;
    }
    return 0;
}