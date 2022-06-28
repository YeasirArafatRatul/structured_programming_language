// C program to implement recursive Binary Search
#include <stdio.h>


// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}


// function to sort elements
void quicksort(int number[],int first, int last){
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


// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = (l + r) / 2;
        printf("MID %d", mid);

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

int main(void)
{
    int arr[] = { 4, 2, 3, 10, 40, 50, 20, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 11;

    quicksort(arr, 0, n - 1);

    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}
