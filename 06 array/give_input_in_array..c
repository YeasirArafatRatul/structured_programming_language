#include<stdio.h>
#define VALUE 10

int main(){
    int i, n;
    // int arr[VALUE];

    // inputing elements in array
    /*
    for(i = 0; i < VALUE; i++){
        scanf("%d", &arr[i]);
    }
    */
    int array[] = {1,2,3, [40] = 2, [2] = 1, [35] = 3};

    // printing elements of array
    for(i = 0; i < 41;i++){
        printf("%d ", array[i]);
    }



    return 0;

}



