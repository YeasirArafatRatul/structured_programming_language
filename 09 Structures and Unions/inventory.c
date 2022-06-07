#include<stdio.h>

struct inventory
{
    char item_name[5];
    int item_number;
    double price;
    int quantity;
};



    void main()
{
    // 4 items inventory
    struct inventory items[3];

    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Enter Data For Item %d\n", i+1);
        printf("Name: ");
        scanf("%s", &items[i].item_name);


        printf("Number: ");
        scanf("%d", &items[i].item_number);


        printf("Price: ");
        scanf("%lf", &items[i].price);


        printf("Quantity: ");
        scanf("%d", &items[i].quantity);


        fflush(stdin);
    }

printf("\nName\tNumber\tPrice\tQuantity\n");
   for(i = 0; i < 3; i++)
    {
    printf("%s\t", items[i].item_name);
    printf("%d\t", items[i].item_number);
    printf("%.2lf\t", items[i].price);
    printf("%d\n", items[i].quantity);

    }
}


