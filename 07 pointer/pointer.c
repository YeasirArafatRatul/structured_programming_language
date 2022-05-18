#include<stdio.h>


int main(){
    int a = 5;
    int *p = &a;

    printf("Address of a: %d\n", &a);
    printf("Value of *p: %d\n", p);
    printf("Address of *p: %d\n", &p);
    printf("Value stored in the address(which is the value of *p): %d", *p);

    return 0;
}


