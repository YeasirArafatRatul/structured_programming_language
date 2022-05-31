#include<stdio.h>
#include<string.h>

// making a new type with typedef
typedef struct car{
    char name[10];
    char model[20];
    int year;

    }car_type;


void main()
{

    car_type car1 = {.name = "BMW", .year = 2022, .model = "R8"};

    printf("%s \n", car1.name);
    printf("%s \n", car1.model);
    printf("%d \n", car1.year);

    // assigning values to the name
    strcpy(car1.model, "New Model");

    printf("%s \n", car1.model);

}

