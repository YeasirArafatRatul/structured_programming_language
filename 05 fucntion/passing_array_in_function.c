#include<stdio.h>


void print_array(int array[][], int n, int m){
    int i, j;

    printf("The values of the array is: ");

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}


void scan_array(int array[][], int n, int m){
    int i, j;

    printf("Input Array: ");

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanff("%d", &array[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}
