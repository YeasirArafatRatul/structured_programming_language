#include<stdio.h>



int add(int a, int b)
{
    return a + b;
}


int main()
{
    int result;
    int (*ptr)(int, int) = add;
    result = ptr(4,5);

    printf("Result: %d", result);

    return 0;

}

