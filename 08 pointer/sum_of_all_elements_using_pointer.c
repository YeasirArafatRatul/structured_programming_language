#include<stdio.h>

int main(){

    int array[5] = {2,3,4,2,16}, sum_of_elements = 0;
    int *ptr = &array;

    for(int i = 0; i < 5; i++)
    {
        sum_of_elements += *(ptr + i);
    }
    printf("Sum of elements: %d", sum_of_elements);
    return 0;
}
