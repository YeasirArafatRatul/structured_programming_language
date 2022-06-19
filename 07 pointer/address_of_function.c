#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}


int main()
{
    int result;

    printf("Address of function add() %d\n", add);
    printf("Address of function main() %d", main);
    result = add(4,6);

    return  0;
}
