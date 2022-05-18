#include<stdio.h>

int main(){

    int arr[3][3], row_sum[3],col_sum[3],i, j, rsum = 0, csum = 0;

    // taking inputs
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
                scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
                rsum += arr[i][j];
                csum += arr[j][i];
        }
        row_sum[i] = rsum;
        col_sum[i] = csum;
        printf("Sum of row no: %d = %d \n", i + 1, row_sum[i]);
        printf("Sum of column no: %d = %d \n",  i + 1, col_sum[i]);
        rsum = 0;
        csum = 0;
    }


    return 0;
}
