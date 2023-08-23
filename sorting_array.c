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
void main(){
    int n,temp;
    p("Enter the number of elements of array: ");
    n = s(n);
    int arr[n-1],i,j;
    for(i = 0; i <= n ; i++){
        pi(i);
        p(" ");
        arr[i]=s(arr[i]);
    }
    for(i = 0; i<= n ;i++){
        printf("%d ",arr[i]);
    }
    p("\n");
    for(j = 0; j < n ; j++)
    {
        for(i = 0 ; i <=n ; i++){
            if ((arr[i]!=arr[n])&&(arr[i]<arr[i+1])){
                temp = arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
            }}
    for(i = 0; i<= n ;i++){
        printf("%d ",arr[i]);
    }
    
}