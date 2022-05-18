/*
this program prints address of elements of an array.
*/
#include<stdio.h>

int main(){

    int i, arr[5] = {2,4,5,1,4};

    char c[5] = {'a','b','c','d','e'};

    for(i = 0; i < 5; i++){
        printf("%d \n", &arr[i]);
    }

    printf("\n");

    for(i = 0; i < 5; i++){
        printf("%d \n", &c[i]);
    }

    return 0;
}
