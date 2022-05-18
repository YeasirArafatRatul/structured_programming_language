#include<stdio.h>

int add(int a,int b){

    return a + b;
}

int sub(int a, int b){

    return a - b;
}

int main()
{
    int array[2] = {add, sub};
    int a;
    for(int i = 0; i < 2; i++){
        a = array[i](5,6);
        printf("%d", a);
    }
}
