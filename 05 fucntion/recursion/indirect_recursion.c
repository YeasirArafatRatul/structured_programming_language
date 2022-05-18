#include<stdio.h>

int n = 1;

void even()
{
    if(n<=10){
        printf("%d ", n);
        n++;
        odd();
    }
}

void odd()
{
    if(n<=10){
        printf("%d ", n);
        n++;
        even();
    }
}

int main(){
    odd();
}


