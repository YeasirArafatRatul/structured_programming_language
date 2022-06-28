#include<stdio.h>

// function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}


// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void quicksort(int number[],int first,int last){
   int start, end, pivot, temp;

   if(first < last){

      pivot = first;
      start = first;
      end = last;

      while(start < end){
         while(number[start] <= number[pivot] && start < last)
          {
                start++;
          }
         while(number[end] > number[pivot])
           {
                end--;
           }
         if(start <= end){
            swap(&number[start], &number[end]);
         }
      }
    printArray(number, 9);
    swap(&number[end], &number[pivot]);
    printArray(number, 9);

    quicksort(number,first,end-1);
    quicksort(number,end+1,last);

   }
}


// main function
int main() {
  int array[] = {7, 6, 10, 5, 9, 2, 1, 15, 7};

  int n = sizeof(array) / sizeof(array[0]);

  printf("Unsorted Array\n");
  printArray(array, n);

  // perform quicksort on data
  quicksort(array, 0, n - 1);

  printf("Sorted array in ascending order: \n");
  printArray(array, n);
}
