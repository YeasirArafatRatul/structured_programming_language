#include<stdio.h>


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

    swap(&number[end], &number[pivot]);


    quicksort(number,first,end-1);
    quicksort(number,end+1,last);

   }
}


// function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}


// main function
int main() {
  int array[] = {8, 7, 2, 1,1, 0, 9, 6};

  int n = sizeof(array) / sizeof(array[0]);

  printf("Unsorted Array\n");
  printArray(array, n);

  // perform quicksort on data
  quicksort(array, 0, n - 1);

  printf("Sorted array in ascending order: \n");
  printArray(array, n);
}
