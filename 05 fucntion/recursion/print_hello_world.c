#include<stdio.h>

int loop(int n){

    if (n==0){
        printf(" ");
    }

    else{

        printf("Hello World\n");
        loop(n-1);
    }

}

int main(int n){

    loop(10);

}
