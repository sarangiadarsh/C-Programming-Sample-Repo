#include <stdio.h>
int main(){
float num1;
float a=0;
int num,i= 10;
printf("Enter number ");
scanf(" %d",&num);
num1=(float)num/1;
while(a<num1&&i<10000){
    a+=num%i;
    i*=10;
    a/=10;
    printf(" %f",a);
}
    printf("\na=%f, num = %d, num1 = %f\n",a,num,num1);
    if(a==num1){
        printf("Yes");}
    else{
        printf("No");}
return 0;
}