#include<stdio.h>

void square(int *a){

    printf("%d\n", *a);
    *a = (*a) * (*a);


}

int main(){

    int n = 3, *p = &n;
    square(p);

    printf("%d", n);

    return 0;

}
