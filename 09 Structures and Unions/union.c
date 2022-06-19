#include <stdio.h>

typedef union {
    int a;
    char ch;
}data;

int main() {
    // Write C code here

    data var1;

    var1.a = 66;
    printf("Size of var1: %d\n", sizeof(var1));
    printf("a = %d\n", var1.a);
    printf("ch = %c", var1.ch);
    return 0;
}
