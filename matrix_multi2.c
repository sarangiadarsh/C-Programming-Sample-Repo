#include <stdio.h>
void main(){
    int a[3][3],c[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf(" %d",&a[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf(" %d\t",a[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            c[i][j]=0;
            printf(" %d\t",c[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k< 3; k++){
            c[i][j]+=a[i][k]*a[k][j];
            }
            printf(" %d\t",c[i][j]);
        }
        printf("\n");
    }
}