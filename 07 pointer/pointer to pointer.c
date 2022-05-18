/*
& - Address of Operator
* - Value of Operator
*/
#include<stdio.h>

int main(){

    int a = 5;
    int *p = &a;
    int **q = &p; //pointer to another pointer *p
    /*
    Here,
    p is storing the address of 'a' and q is storing the address of 'p'
    */
    printf("Value of a: %d \n", a); // Output: 5
    printf("Value of a(using dereferencing): %d \n", *p); // Output: 5
    printf("Address of a: %d \n", &a); // Output: 6422044
    printf("Address of a: %d \n", p); // Output: 6422044

    printf("Address of p: %d \n", &p); // Output: 6422032
    printf("Address of p: %d \n", q);  // Output: 6422032
    printf("Value of of q: %d \n", *q); // Output: 6422044
    printf("Address of q: %d\n", &q); // Output: 6422080

    return 0;

}
