/*
floyd's triangle

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include<stdio.h>

int main(){
    int n, i, j, rows;
    printf("Number of rows: ");
    scanf("%d", &rows);

    n = 1;
    for(i = 1; i<=rows; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", n);
            n++;
        }
    printf("\n");
    }
    return 0;

}
