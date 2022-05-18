#include<stdio.h>

void print_array(int n, int m,int array[n][m]);
void scan_array(int n, int m,int array[n][m]);

int main()
{
    int n1,m1,n2,m2,matrix_1[n1][m1],matrix_2[n2][m2],result[m1][n2];

    printf("Enter the degree [(number of rows)n x m(number of column)] of 1st matrix:");
    scanf("%d%d",&n1,&m1);

    printf("Enter the values of the 1st matrix.\n");
    scan_array(n1,m1,matrix_1);

    print_array(n1,m1,matrix_1);

    return 0;
}

void print_array(int n, int m,int array[n][m])
{
    int i,j;

    printf("The value of the array is: \n");

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            //shows this error: expression must be a pointer to a complete object type
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void scan_array(int n, int m,int array[n][m])
{
    int i,j;

    printf("Input here: \n");

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            //shows this error: expression must be a pointer to a complete object type
            scanf("%d",&array[i][j]);
        }
    }
}
