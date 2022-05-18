#include<stdio.h>

int main(){

    int i,j,temp, array[5];

    for(i = 0; i<5; i++){
        scanf("%d", &array[i]);
    }

    // Suppose we have entered: 5 3 2 1 8

    for(i = 0; i < 5; i++){
        for(j = i+1; j < 5;j++){
            if(array[i] > array[j])
             {
                // swap if greater
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
             }
        }
    }
    //print array elements
    for(i = 0; i<5; i++){
        printf("%d ", array[i]);
    }

}
