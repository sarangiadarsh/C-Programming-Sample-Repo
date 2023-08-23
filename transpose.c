#include <stdio.h>
int main(){
    int n,m;
    printf("Enter size of matrix: ");
    scanf(" %d%d",&n,&m);
    int a[n][m],b[m][n];
    printf("Enter elements of array: ");
    for(int i = 0; i< n; i++){
        for(int j = 0; j < m; j++){
            printf("\n%d%d:",i,j);
            scanf(" %d",&a[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf(" %d\t",a[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            b[j][i]=a[i][j];
            printf(" %d %d\t",a[i][j],b[i][j]);
        }
        printf("\n");
    }
    return 0;
}