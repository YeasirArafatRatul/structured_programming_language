#include<stdio.h>

int main(){


    int i,n,max = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int array[n];

    for(i = 0; i<n; i++){
        scanf("%d", &array[i]);
    }

    // Suppose we have entered: 5 3 2 1 8
    for(i = 0; i < n; i++){
        if(array[i] > max){
            max = array[i];
        }
    }

    //print max
    printf("MAX: %d ", max);

    return 0;
}

