#include <stdio.h>

/*
A main is a predefined keyword or function in C.
It is the first function of every C program that is responsible
for starting the execution and termination of the program.
It is a special function that always starts executing code.
*/

void chopper();
void dish_cleaner();

int main(){

printf("Give Me Ingredients Chopper\n");
chopper();

printf("Cooking Started\n");
printf("Cooked\n");

dish_cleaner();

printf("Served to customer");

return 0;
}



void chopper(){
printf("All are chopped and given to Head Chef\n");
};


void dish_cleaner(){
printf("A cleaned dish is given to Head Chef\n");
};
