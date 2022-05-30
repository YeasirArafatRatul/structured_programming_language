#include<stdio.h>

int aescending(int a, int b)
{
    if(a > b) return 1;
    else return -1;
}

int descending(int a, int b)
{
    if(a > b) return -1;
    else return 1;
}

void bubbleSort(int* A, int n, int(*compare)(int, int))
{
    int i, j, temp;
    for(i = 0; i<n; i++)
    {
        for(j = 0;j<n-1; j++)
        {
            if(compare(A[j], A[j+1]) > 0)
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}
int main(){

    // pointer that holds the address of the 'greetings' function.
    int i, A[] = {10,4,5,8,6};
    bubbleSort(A,5,descending);
    for(i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;

}

