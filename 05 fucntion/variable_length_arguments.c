#include<stdio.h>
#include<stdarg.h>

// n = number of arguments
// va_list is defined in 'stdarg.h' header file

int addition(int n, ...)
{

    int sum = 0;
    va_list list;
    va_start(list, n);

    for(int i = 0; i < n; i++)
    {
        int item = va_arg(list, int);
        sum += item;
    }
    va_end(list);
    return sum;

}

int main()
{
    printf("Sum %d", addition(4,3,8,5,5));

    return 0;
}
