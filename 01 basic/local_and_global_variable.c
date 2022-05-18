#include<stdio.h>

int a = 4; //global variable
int main(){

    int a = 3; //local variable
    {
        extern int a; //accessing global variable with 'extern' keyword
        printf("%d\n", a);
    }

    printf("%d", a);

    return 0;
}
