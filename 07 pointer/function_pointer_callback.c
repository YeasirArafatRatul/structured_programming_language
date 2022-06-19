#include<stdio.h>

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
    /*
    calling the func() and passing greetings() function's address
    another way of calling -> func(greetings)
    */
    func(p);

    return 0;

}
