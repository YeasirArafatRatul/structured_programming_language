#include<stdio.h>

int ascending(int a, int b)
{
    if(a > b) return 1;
    else return -1;
}

int descending(int a, int b)
{
    if(a < b) return 1;
    else return -1;
}

void sort(int* A, int n, int(*compare)(int, int))
{
    int i, j, temp;

    for(i = 0; i<n; i++)
    {
        for(j = 0;j<n-1; j++)
        {
            // if function 'ascending' is passed as parameter then the value of compare will be the address of 'ascending'
            // if function 'descending' is passed as parameter then the value of compare will be the address of 'descending'
            if(compare(A[j], A[j+1]) > 0)
            {
                // swapping
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}
int main(){

    int i, A[] = {10,4,5,8,6,3,2,14};
    sort(A,8,ascending);// calling sort() and passing function as argument
    for(i = 0; i < 8; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;

}

