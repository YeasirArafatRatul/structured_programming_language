#include<stdio.h>


int a;



int main(){
    scanf("%d", &a);

    if(a > 0){
        printf("Positive");
    }
    else if(a < 0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
    return 0;
}