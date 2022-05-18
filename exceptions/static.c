#include<stdio.h>

// this program shows 1 2 3
void f();

int main(){

    f();
    f();
    f();
}


void f(){

static int i;

++i;

printf("%d",i);

}
