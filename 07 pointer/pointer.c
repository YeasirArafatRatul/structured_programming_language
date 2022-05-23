#include<stdio.h>

/*  & = is used to access the address
    * = is used to access the value
*/

int main(){
    int x = 3;

    // pointer works with memory address
    //storing value of x;
    int *p = &x;

    int *q;
    q = &x;

    // prints the value
    printf("Value of X: %d\n", x);
    // prints the address
    printf("Address of X: %p\n", &x);


    // prints the value
    printf("Value of X: %d\n", *p);
    // prints the address
    printf("Address of X: %d\n", p);



    // prints the value
    printf("Value of X: %d\n", *q);
    // prints the address
    printf("Address of X: %d\n", q);
    return 0;

}
