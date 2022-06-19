#include<stdio.h>

typedef union {

    int a;
    char b;
    float c;
}new_array;

int main()
{
    new_array array[3];
    array[0].a = 20;
    array[1].b = 'A';
    array[2].c = 3.4;

    return 0;
}
