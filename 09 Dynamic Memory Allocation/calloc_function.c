#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *ptr = (int*)malloc(4*sizeof(int));
    int *ptr2 = (int*)calloc(4, sizeof(int));


    printf("malloc: %d \t calloc: %d\n", *ptr, *ptr2);

    return 0;
}
