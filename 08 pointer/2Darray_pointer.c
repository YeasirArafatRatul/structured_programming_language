/*
matrix               =>    Points to base address of two-dimensional array.
                           Since array decays to pointer.

*(matrix)            =>    Points to first row of two-dimensional array.
*(matrix + 0)        =>    Points to first row of two-dimensional array.
*(matrix + 1)        =>    Points to second row of two-dimensional array.

**matrix             =>    Points to the value of matrix[0][0]
*(*(matrix + 0))     =>    Points to the value of matrix[0][0]
*(*(matrix + 0) + 0) =>    Points to the value of matrix[0][0]
*(*matrix + 1)       =>    Points to the value of matrix[0][1]
*(*(matrix + 0) + 1) =>    Points to the value of matrix[0][1]
*(*(matrix + 2) + 2) =>    Points to the value of matrix[2][2]

*/

#include<stdio.h>

int main()
{
    int matrix[3][3] = {{1,3,5},{2,4,6},{3,6,9}};
    printf("%d\n", &matrix[2][0]);
    printf("%d\n", *matrix);
    printf("%d\n", **matrix);
    printf("%d\n", *(matrix + 2));

    return 0;
}
