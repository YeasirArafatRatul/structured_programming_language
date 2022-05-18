#include<stdio.h>

// Can be written as int* arr / int *arr
void function(int arr[], int size){
    int i = 0;

    for(i; i<size; i++){
         printf("Address of arr[%d] = %d\n", i, &arr[i]);
         arr[i] = arr[i] * 2;
    }

}

int main(){
    int array[] = {3,4,5,6,7}, i;
    int size = sizeof(array) / sizeof(array[0]);
    function(&array, size);

    for(i = 0; i<size; i++){
        printf("Value = %d\n", array[i]);
    }
    for(i = 0; i<size; i++){
        printf("Address of array[%d] = %d\n", i, &array[i]);
    }


}
