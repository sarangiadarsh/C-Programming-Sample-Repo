#include <stdio.h>
void p(char str[]){
    printf("%s",str);
}
int s(int a){
    scanf(" %d",&a);
    return a;
}
void pi( int a){
    printf(" %d",a);
}
int facto(int a){
    while(a!=1){
    return (a * (facto(a-1)));
    }
}
void main(){
    int a = 7,b;
    p("This is a string\n");
    //recursive function 
    p("Wow Vindhya so cute <3\n");
    p("Anyways enter a number to print factorial: ");   
    a = s(a);
    b = facto(a);
    pi(b);
}