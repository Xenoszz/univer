#include <stdio.h>

int main() {
    int i,j,a,b,sum,count;
    sum = count = 0;
    printf("Input order of matrix A m,n = ");
    scanf("%d %d",&a,&b);
    int row[a][b];
    printf("input element of matrix A\n");
    
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("[%d][%d] = ",i+1,j+1);
            scanf("%d",&row[i][j]);
        }
    }
    
    printf("\n");
    
    for(i = 0; i < a; i++){
        sum = count = 0;
        for(j = 0; j < b; j++){
            count++;
            sum += row[i][j];
            printf("%6d",row[i][j]);
            if(count == b){
                printf("\tsum of row %d = %d",i+1,sum);
            }
        }
        printf("\n");
    }
    
    sum = count = 0;

    return 0;
}