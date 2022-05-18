#include<stdio.h>

int main(){

    int array1[3][3] = {{1,2,3},{4,5,5},{6,7,6}},
    array2[3][3] = {{9,4,5},{2,1,6},{7,5,1}},
    resultant_array[3][3], product, sum = 0;

    /*
    array1 = [
               1 2 3
               4 5 5
               6 7 6
               ]

    array2 = [
              9 4 5
              2 1 6
              7 5 1
              ]
    */

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
            product = array1[i][k] * array2[k][j];
            sum += product;
            }
        resultant_array[i][j] = sum;
        sum = 0;
        }
    }


   for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", resultant_array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
