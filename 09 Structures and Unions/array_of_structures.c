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
    // 4 items of car_type structures are used in array 'cars'
    car_type cars[4];

    int i;

    for(i = 0; i < 4; i++)
    {
        printf("For Car %d Name: ", i+1);
        scanf("%s", &cars[i].name);

        printf("For Car %d Model: ", i+1);
        scanf("%s", &cars[i].model);

        printf("For Car %d Year: ", i+1);
        scanf("%d", &cars[i].year);
    }


   for(i = 0; i < 4; i++)
    {
    printf("\nFor Car %d Name: %s \n", i+1, cars[i].name);
    printf("For Car %d Model: %s \n", i+1, cars[i].model);
    printf("For Car %d Year: %d \n", i+1, cars[i].year);

    }
}


