#include<stdio.h>




/* this is a callback function -> When the reference to a function is passed to
another function that function is called a callback function */
void greetings()
{
    printf("Hello");
}

// this function will take a function as parameter
void func(void (*ptr)())
{

    ptr();
}

int main(){

    // pointer that holds the address of the 'greetings' function.
    void (*p)() = greetings;
    func(p);

    return 0;

}
