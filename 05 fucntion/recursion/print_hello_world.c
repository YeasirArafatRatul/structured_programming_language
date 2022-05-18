#include<stdio.h>

int loop(int n){

    if (n==1){
        printf("Hello World");
    }

    else{

        printf("Hello World\n");
        loop(n-1);
    }

}


int main(int n){

    loop(20);

}
