#include<stdio.h>

/*
int removeDuplicates(int* nums, int numsSize){

}
*/


int main(){
    int size = 5;
    int array[size];
    int i,j,k;

    for(i = 0; i<size; i++){
        scanf("%d", &array[i]);
    }

    for(i = 0; i < size; i++)
        {
         for(j = i + 1; j < size; j++)
        {
            if ( array[i] == array[j])
            {
                // delete the current position of the duplicate element
                for ( k = j; k < size - 1; k++)
                {
                    array[k] = array[k + 1];
                }
                // decrease the size of array after removing duplicate element
                size--;

            // if the position of the elements is changes, don't increase the index j
                j--;
            }

        }

    }

    for(i=0;i<size;i++){
        printf("%d", array[i]);
    }
    return 0;
}
