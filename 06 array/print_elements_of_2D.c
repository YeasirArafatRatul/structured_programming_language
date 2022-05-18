#include<stdio.h>

int main(){

    int arr[2][3] = {{1,2,3},{2,5,7}};


    int row_index, col_index;

    for(row_index = 0; row_index < 2; row_index++){
        for(col_index = 0; col_index < 3; col_index++){
            printf("%d ", arr[row_index][col_index]);
        }
    printf("\n");
    }
    return 0;

}
