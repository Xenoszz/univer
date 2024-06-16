#include <stdio.h>

int martixswapping(int a[10][10], int n, int m,int c1,int c2);
int main(){
    int a[10][10],m,n,i,j,c1,c2;
    printf("input order of matrix m,n = ");
    scanf("%d,%d",&m,&n);
    printf("input matrix A\n");
    for (i = 1; i<= m ;i++){
        for (j = 1; j<= n; j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("martrix a before swapping\n");
    for (i = 1; i<= m ;i++){
        for (j = 1; j<= n; j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    printf("input column number for swapping (c1,c2) = ");
    scanf("%d,%d",&c1,&c2);

    martixswapping(a,n,m,c1,c2);
}

int martixswapping(int a[10][10], int n, int m,int c1, int c2){
    int i,j,temp;

    for (i= 1; i <= m; i++){
        temp = a[i][c1];
        a[i][c1] = a[i][c2];
        a[i][c2] = temp;}

        
    for (i = 1; i<= m ;i++){
        for (j = 1; j<= n; j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
}


