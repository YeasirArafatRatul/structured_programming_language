#include<stdio.h>

int main(){

    int array[3][3] = {{2,3,4},{9,2,16},{12,3,5}};


    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", *(*(array + i) + j));
        }
        printf("\n");

    }
    return 0;
}
