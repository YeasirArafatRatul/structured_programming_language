/*
According to the 1999 ISO C standard (C99),
size_t is an unsigned integer type of at least 16 bit (see sections 7.17 and 7.18.3).

size_tis an unsigned data type defined.

This type is used to represent the size of an object.
Library functions that take or return sizes expect them to be of type or have the return type of size_t.
*/

#include<stdio.h>

int main(){

    double a = 150.00;
    size_t size = sizeof(a);


    printf("%zu", size);


}
