#include<stdio.h>


// a void function
void greetings()
{
    printf("Hello");
}

// this function will take a function as parameter
void call_back(void (*ptr)())
{

    ptr();
}

int main(){

    // pointer that holds the address of the 'greetings' function.
    void (*p)() = greetings;
    call_back(p);

    return 0;

}
