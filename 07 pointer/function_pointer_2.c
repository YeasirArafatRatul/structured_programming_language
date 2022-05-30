#include<stdio.h>
#define number_of_functions 2

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int choice, a, b;
    int (*arrayOfptr[number_of_functions])(int, int) = {add, sub};

    printf("Enter your choice: \n 1: add \n 2: sub\n");
    scanf("%d", &choice);

    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    printf("Result: %d", arrayOfptr[choice-1](a,b));

    return 0;
}
