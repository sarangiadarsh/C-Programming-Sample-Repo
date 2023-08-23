#include <stdio.h>
#include <conio.h>
int main(){
    float a,b;
    char c;
    float m;
    printf("Enter two numbers ");
    scanf(" %f",&a);
    scanf(" %f",&b);
    printf("Enter operator ");
    scanf(" %c",&c);

    switch (c)
    {
    case '+':
        m=a+b;
        break;
    case '-':
        m=a-b;
        break;
    case '*':
        m=a*b;
        break;
    case '/':
        m=a/b;
        break;
    }
    printf("%f",m);
    
    return 0;
}