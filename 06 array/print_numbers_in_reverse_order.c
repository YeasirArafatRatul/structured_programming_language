#include<stdio.h>

int main(){
    int  i;

    int arr[] = {34,56,54,32,67,89,90,32,21,123,55};

    // calculate size in bytes
    int arraySize = sizeof(arr);
    int intSize = sizeof(arr[0]);

    // length_of_array = ( total_size_of_the_array ) / ( size_of_the_first_element_of_the_array )
    int length = arraySize/intSize;

    for(i = length-1; i >= 0; i--){

        printf("%d ", arr[i]);
    }

    return 0;

}
