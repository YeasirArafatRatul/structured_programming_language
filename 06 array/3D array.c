#include<stdio.h>


int main(){

    int arr[2][3][3] = {
                    {{1, 2, 3,}, {4, 5, 5}, {6, 7, 6}},
                    {{9, 4, 5}, {2, 1, 6}, {7, 5, 1}}
                };
    int i, j, k;

    for(i = 0; i <= 1; i++){
        for(j = 0; j <= 2; j++){
            for(k = 0; k <= 2; k++){
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
         printf("\n\n");
    }

}
